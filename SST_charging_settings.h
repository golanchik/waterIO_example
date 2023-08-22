//
// Created by konst on 6/1/2021.
//

#ifndef IMPAXIO_PEPSI_PROJECT_SST_CHARGING_SETTINGS_H
#define IMPAXIO_PEPSI_PROJECT_SST_CHARGING_SETTINGS_H
#ifdef __cplusplus
extern "C" {
#endif

/********************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 .
  * All rights reserved.</center></h2>
  *
  *  ADD GENERAL BRIEF
  *
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
#include "cytypes.h"

/* typedef -----------------------------------------------------------*/

/* define ------------------------------------------------------------*/
#define CHARGER_TIMEOUT                         ((7*60*60)-(10*60))

#define ADC_Battery_Channel                     (0)
#define ADC_Battery_Coef                        (1.515)
#define ADC_VREF                                (3.0)
#define ADC_RES                                 (2048)

#define HIGH_BATTERY_LEVEL_MEASURE_PERIOD       (60)    // (10*60) // seconds
#define LOW_BATTERY_LEVEL_MEASURE_PERIOD        (60)    // seconds
#define VERY_LOW_BATTERY_LEVEL_MEASURE_PERIOD   (60)    // seconds
#define CHARGE_MODE_MEASURE_PERIOD              (60)    // seconds
#define BATTERY_LOW_EMIT_PERIOD                 (5*60)  // seconds

#define MAX_BATTERY_LEVEL                       (4200)  // milliV
#define HIGH_BATTERY_THRESHOLD                  (4190)  // milliV
#define LOW_BATTERY20_THRESHOLD                 (3452)  //( old version 3506)
#define LOW_BATTERY10_THRESHOLD                 (3395)  // (old version 3429)
#define LOW_BATTERY5_THRESHOLD                  (3300)
#define LOW_BATTERY3_THRESHOLD                  (3360)
#define BATTERY_OK_LEVEL_5                      (3589)  // (old version 3557)
#define LOW_BATTERY_THRESHOLD                   (3500)  // milliV
#define VERY_LOW_BATTERY_THRESHOLD              (3300)  // milliV
#define MIN_BATTERY_LEVEL                       (3200)  // milliV
#define BATTERY_LOW_THRESHOLD                   (3000)

#define VOLT2PERCENTAGE_ARRAY_SIZE (21)
/* macro -------------------------------------------------------------*/

/* variables ---------------------------------------------------------*/
extern const uint16 volt2PrcTable[VOLT2PERCENTAGE_ARRAY_SIZE][2];
/* function prototypes -----------------------------------------------*/


#ifdef __cplusplus
}
#endif
#endif //IMPAXIO_PEPSI_PROJECT_SST_CHARGING_SETTING_H
/* [] END OF FILE */