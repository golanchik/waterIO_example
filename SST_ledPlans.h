/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __LEDS_PLANS_ST_H
#define __LEDS_PLANS_ST_H
#ifdef __cplusplus
 extern "C" {
#endif
/**
  ******************************************************************************
  * @file           : ledsPlan_ST.h
  * @brief          : 
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 .
  * All rights reserved.</center></h2>
  *
  *  ADD GENERAL BRIEF
  *
  ******************************************************************************
  */

//#include "main.h"
#include "../../SRC_Shared/Peripheral/LEDSBase.h"

#define MAX_OF_LEDS                     (12)
#define DEFAULT_COLOR                   (color_t){80, 80, 80}
#define PAIRING_LED_COLOR               (DEFAULT_COLOR)
#define PAIRING_SUCCESS_LED_COLOR       DEFAULT_COLOR
#define PAIRING_LED_DURATION            (1050)
#define PAIRING_FOUND_LED_DURATION      (200)
#define REMINDER_PULSE_LED_DURATION     (6000)
#define REMINDER_BOUNCE_LED_DURATION    (250)
#define GOAL_REACHED_LED_DURATION       (1050)
#define REMINDER_DEFAULT_COLOR          {80, 80, 80}
#define GOAL_REACHED_LED_COLOR          REMINDER_DEFAULT_COLOR
#define LOW_BATTERY_LED_COLOR           (color_t){255, 0, 0}
#define FILLED_UP_COLOR                 DEFAULT_COLOR
#define CUSTOM_PLAN_COLOR               DEFAULT_COLOR
#define ShowBatteryLevel_COLOR          (color_t){8, 8, 8}
#define ShowHydrationLevel_COLOR        (color_t){16,16,16}
#define Show_goalReached_COLOR          (color_t) {64, 64 , 64}

typedef enum
{
	LED_PLAN_ID_CONNECTION,              // 0
	LED_PLAN_ID_REMINDER,                // 1
	LED_PLAN_ID_OPEN_EVENT,              // 2
	LED_PLAN_ID_CLOSE_EVENT,             // 3
	LED_PLAN_ID_WHO_I_AM,                // 4
	LED_PLAN_ID_CUSTOM,                  // 5
	LED_PLAN_ID_BATTERY_LEVEL,           // 6
	LED_PLAN_ID_LOW_BATTERY_LEVEL,       // 7
	LED_PLAN_ID_HYDRATION_LEVEL,         // 8
	LED_PLAN_ID_PAIRING,                 // 9
	LED_PLAN_ID_PAIRING_FOUND,           // 10
	LED_PLAN_ID_DEAD_BATTERY,            // 11
	LED_PLAN_ID_REMINDER_PULSE,          // 12
	LED_PLAN_ID_REMINDER_BOUNCE,         // 13
	LED_PLAN_ID_GOAL_REACHED,            // 14
	LED_PLAN_ID_PAIRING_COMPLETE,        // 15
	LED_PLAN_ID_ENTER_EXIT_DARK_MODE,    // 16
	LED_PLAN_ID_FILLED_UP,               // 17
    LED_PLAN_ID_TEST,                    // 18
	LED_PLAN_ID_MAX_PLANS                
} planId_t;

// all plans will be stored here, the order should be same as planId_t. 
extern  plan_t* plans[LED_PLAN_ID_MAX_PLANS];

#ifdef __cplusplus
}
#endif

#endif /*__LEDS_PLANS_ST_H */
