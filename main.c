/*******************************************************************************
* File Name: main.c
*
* Version: 1.0
*
* // Splited Version, Start 23.11.2020 
*******************************************************************************/

#include "main.h"
#include "cap_app.h"
#include "interrapts.h"
#include "init_app.h"
#include "../BLE/BLE_main.h"
#include "../Modules/debugPort_Module.h"
#include "../Modules/measurement_Module.h"
#include "../Modules/CLI_Module.h"
#include "../Modules/RTC_Module.h"
#include "../Modules/reminder.h"
#include "../Modules/OCD_Module.h"
#include "../Modules/flash_Module.h"
#include "../Peripheral/LEDSBasicPlans.h"
#include "../Peripheral/PushButton_Module.h"

extern void InitializeBootloaderSRAM(void);
extern const CYBLE_SCPSS_T cyBle_scpss;
extern const CYBLE_BTSS_T cyBle_btss;
CYBLE_API_RESULT_T CyBle_GapRemoveDeviceFromWhiteList(CYBLE_GAP_BD_ADDR_T* bdAddr);

void InitializeBootloader()
{
#if !defined(__ARMCC_VERSION)
    InitializeBootloaderSRAM();
#endif
    //AfterImageUpdate();
    CyGlobalIntDisable;
    /* Unlock the WDT registers for modification */
    CySysWdtUnlock();
    /* Disable the specified WDT counter */
    CySysWdtDisable(WDT_COUNTER_MASK);
    /* Locks out configuration changes to the Watchdog timer registers */
    CySysWdtLock();
    //Bootloader_Service_Activation_ClearInterrupt();
    //Wakeup_Interrupt_ClearPending();
}

void HideUnusedServices()
{
    CyBle_GattsDisableAttribute(cyBle_hidss[0].serviceHandle);
    CyBle_GattsDisableAttribute(cyBle_diss.serviceHandle);
    //CyBle_GattsDisableAttribute(cyBle_bass[0].serviceHandle);
    CyBle_GattsDisableAttribute(cyBle_scpss.serviceHandle);
}

void CustomBootloaderSwitch()
{
    CyBle_Shutdown(); /* stop all ongoing activities */
    CyBle_ProcessEvents(); /* process all pending events */
    CyBle_SetState(CYBLE_STATE_STOPPED);
    CySysWdtUnlock();
    CySysWdtDisable(WDT_COUNTER_MASK);
    CyGlobalIntDisable;
    Bootloadable_Load();
}

int main()
{
    InitializeBootloader();
    interruptInit();
    //IDAC_Start(); yosef told me
    CySysTickStart();

    UserFlash_Init();
    // RTC must be called before WDT timer.
    // RTC is driven by WDT counter0 interrupt.
    // it assume that WDT counter0 interrupt is performed every ONE second
    RTCInit();
    WDT_Start();

    CYBLE_LP_MODE_T         lpMode;
    CYBLE_BLESS_STATE_T     blessState;
    CYBLE_API_RESULT_T      bleApiResult;
    bleApiResult = CyBle_Start(AppCallBack); 
    
    HideUnusedServices();

    if(bleApiResult == CYBLE_ERROR_OK)
    {
        CyBle_ProcessEvents();
        CyGlobalIntEnable;     
        appInit();
    }
    else
    {
        UART_UartPutString("\n\r\t\tCyBle stack initialization FAILED!!! \n\r ");
    }
    /***************************************************************************
    * Main polling loop
    ***************************************************************************/
    while(1)
    {

        if (getAppPowerState() == false)
        {
            if (CyBle_GetState() != CYBLE_STATE_INITIALIZING)
            {
                /* Enter DeepSleep mode between connection intervals */
                lpMode = CyBle_EnterLPM(CYBLE_BLESS_DEEPSLEEP);
                blessState = CyBle_GetBleSsState();
                CyGlobalIntDisable;
                if (lpMode == CYBLE_BLESS_DEEPSLEEP)
                {
                    /* If the ECO has started or the BLESS can go to Deep Sleep, then place CPU
                    * to Deep Sleep */
                    if (blessState == CYBLE_BLESS_STATE_ECO_ON || blessState == CYBLE_BLESS_STATE_DEEPSLEEP)
                    {
                        CySysPmDeepSleep();
                    }
                }
                else
                {
                    if (blessState != CYBLE_BLESS_STATE_EVENT_CLOSE)
                    {
                        /* If the BLESS hardware block cannot go to Deep Sleep and BLE Event has not
                        * closed yet, then place CPU to Sleep */

                        CySysClkWriteImoFreq(IMO_FREQUENCY_3MHZ);
                        CySysPmSleep();
                        CySysClkWriteImoFreq(IMO_FREQUENCY_24MHZ);
                    }
                }
                CyGlobalIntEnable;
            }
        }
    //Process all pending BLE events in the stack
    HandleBleProcessing();
    if (isNeedToRun_CyBle_ProcessEvents())
        CyBle_ProcessEvents();
    handleIntWDTClear();
    }
}
/* [] END OF FILE */
