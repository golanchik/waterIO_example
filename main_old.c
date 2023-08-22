/*******************************************************************************
* File Name: main.c
*
* Version: 1.0
*
* Description:
*  BLE example project that works as a BLE to UART bridge, using 
*  Cypress's BLE component APIs and application layer callback. 
*  This project demostrates a custom service usage for BLE to UART  
*  bridge in a PERIPHERAL role.
*
* References:
*  BLUETOOTH SPECIFICATION Version 4.1
*
* Hardware Dependency:
*  (1) CY8CKIT-042 BLE
*  (2) An external UART transciever (if flow control is needed) 
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "main.h"
//
#include "cap.h"
//#include "peripherals/h3liS331dlDriver.h"
#include "uartDriver.h"

void handleExtWDTClear(void);
void handleIntWDTClear(void);

char txt[32];
int main()
{
    #ifdef LOW_POWER_MODE    
        CYBLE_LP_MODE_T         lpMode;
        CYBLE_BLESS_STATE_T     blessState;
    #endif
    
    CYBLE_API_RESULT_T      bleApiResult;
    
    CyGlobalIntEnable;
    
    //clear WDT first. 
    handleExtWDTClear(); 
    
    /* Start UART and BLE component and display project information */
    ////
    #ifdef USE_UART
    ////
    UART_Start();   
    ////
    #else
        #ifdef USE_UART_FOR_LOG
            UART_Start();   
        #endif
    #endif
    ////
    
    bleApiResult = CyBle_Start(AppCallBack); 
    
    UART_UartPutString("\n\rApplication : SealedAir\n\r");
    
    if(bleApiResult != CYBLE_ERROR_OK)
    {
        #ifdef PRINT_MESSAGE_LOG   
            UART_UartPutString("\n\r\t\tCyBle stack initilization FAILED!!! \n\r ");
        #endif
        
        /* Enter infinite loop */
        while(1);
    }
    
    CyBle_ProcessEvents();    
    MagneticSwitchInt_StartEx(&MagneticSwitchInt);
    UART_SetCustomInterruptHandler(&UartRxInt);
    WDT_Start();
    I2C_Sleep();
    LEDS_powerUpBlink(RED);
    UserFlash_readAndCheckCRC();
    Cap_Start();
    enableDebupPort();
    CAP_printBDAddress();
    CAP_printHwVerssion();
    CAP_printBatchNumber();
    CAP_printNumOfWarehouseAdv();
    
    
    
    long pressureOffset = 0;
    UserFlash_readPressureOffset(&pressureOffset);
    setPressureOffset(pressureOffset);
    sprintf(txt, "pressure offset - %d\n\r", (int)pressureOffset);
    UART_UartPutString(txt);
       
    #if 0
    //samplingPeriod = 1;
    UserFlash_writeSystemSamplingPeriod(1/*samplingPeriod*/);
    #endif
    uint16_t samplingPeriod = 0;
    UserFlash_readSystemSamplingPeriod(&samplingPeriod);
    setSamplingPeriod(samplingPeriod);
    CAP_printSamplingPeriod();
    uint16_t warehouseAdv = 0;
    UserFlash_readAdvPeriodInWareHouseMode(&warehouseAdv);
    CAP_calculateAdvPerodInWarehouseMode();
    CAP_InitMagnetStatus();
       
#if 0
    extern void LogMeasureEvent(unsigned char c,unsigned short msr1, unsigned short msr2,
                                            unsigned short msr3, unsigned short msr4,
                                            unsigned short msr5);
    int i = 'a';
    for (i = 0; i < 1000; i++)
    {
         LogMeasureEvent(GeneralEvent_Code_Fake, 1, 2, 3, 4, 5);
    }
#endif    
      
    /***************************************************************************
    * Main polling loop
    ***************************************************************************/
    while(1)
    {        
        #ifdef LOW_POWER_MODE
            
            if((CyBle_GetState() != CYBLE_STATE_INITIALIZING) && /* && (CyBle_GetState() != CYBLE_STATE_DISCONNECTED))*/
               (isDebugPortDisabled()))
            {
                /* Enter DeepSleep mode between connection intervals */
                lpMode = CyBle_EnterLPM(CYBLE_BLESS_DEEPSLEEP);
                CyGlobalIntDisable;
                blessState = CyBle_GetBleSsState();

                ////
                if(lpMode == CYBLE_BLESS_DEEPSLEEP)
                {
                    /* If the ECO has started or the BLESS can go to Deep Sleep, then place CPU 
                    * to Deep Sleep */
                    if((blessState == CYBLE_BLESS_STATE_ECO_ON || blessState == CYBLE_BLESS_STATE_DEEPSLEEP) && 
                    (isDebugPortDisabled()))
                    {
                       CySysPmDeepSleep();                       
                    }
                }
                else
                {
                    if((blessState != CYBLE_BLESS_STATE_EVENT_CLOSE) &&
                    (isDebugPortDisabled()))
                    {
                        /* If the BLESS hardware block cannot go to Deep Sleep and BLE Event has not 
                        * closed yet, then place CPU to Sleep */
                        CySysClkWriteImoFreq(IMO_FREQUENCY_3MHZ);
                        CySysPmSleep();
                        CySysClkWriteImoFreq(IMO_FREQUENCY_12MHZ);                        
                    }
                }
                
                CyGlobalIntEnable;             
            }
        #else
            HandleLeds();
        #endif
        
        /*******************************************************************
        *  Process all pending BLE events in the stack
        *******************************************************************/
       

        HandleBleProcessing(); 
        
        CyBle_ProcessEvents();
        
            
        
        #ifdef EXT_WDT
        //Clear External WDT - the external wdt not working
        handleExtWDTClear();
        #endif
        #ifdef INT_WDT_ENABLE
        // if we got here, then everytging is ok, so clear wdt in order to avoid reset
        handleIntWDTClear();
        #endif         
    }
}



void handleIntWDTClear(void)
{
    /* Unlock the WDT registers for modification */
    CySysWdtUnlock();
    
    CySysWdtResetCounters(CY_SYS_WDT_COUNTER1_RESET);
    CySysWdtClearInterrupt(CY_SYS_WDT_COUNTER1_INT);  
    
    /* Lock out configuration changes to the Watchdog timer registers */
    CySysWdtLock();
    //UART_UartPutString("c");
}

void handleExtWDTClear(void)
{
 #if 0   
    WDTClear_Write(1);
    CyDelay(1);
    WDTClear_Write(0);
#endif 
}
/* [] END OF FILE */
