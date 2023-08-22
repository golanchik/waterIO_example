/*******************************************************************************
* File Name: app_LED.h
*
* Description:
*  Contains the function prototypes and constants available to the example
*  project.
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(APP_LED_H)

    #define APP_LED_H
    
    #include "main.h"
    #include <project.h>    
    
    /***************************************
    *       Constants
    ***************************************/
    #define LED_OFF             0x01
    #define LED_ON              0x00
    
    #ifdef LOW_POWER_MODE
        #define ADV_LED_TIMEOUT     3
        #define CONN_LED_TIMEOUT    30
    #else
        #define ADV_LED_TIMEOUT     30000
        #define CONN_LED_TIMEOUT    50000
    #endif

typedef enum
{
    RED = 1,
    GREEN = 2,
    BLUE = 3,
}TLedType;    
    
    /***************************************
    *       Function Prototypes
    ***************************************/
    ////

//// LEDs

    void LEDs_Blue_On();
    void LEDs_Blue_Off();
    void LEDs_Green_On();
    void LEDs_Green_Off();
    void LEDs_Red_On();
    void LEDs_Red_Off();
    void LEDs_A_On(void);
    void LEDs_A_Off(void);
    void LEDs_C_On(void);
    void LEDs_C_Off(void);
    void LEDs_On(void);
    void LEDs_Off(void);
    void LEDS_Reminder();
    void LEDS_powerUpBlink(TLedType a_led);
    void LEDS_Sleep(void);
    void LEDS_Wakeup(void);
 
    
#endif

/* [] END OF FILE */
