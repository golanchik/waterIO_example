//
// Created by konst on 6/1/2021.
//

#ifdef __cplusplus
extern "C" {
#endif

/*******************************************************************************
  * @file           :  
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

/* Includes ------------------------------------------------------------------*/
#include "cytypes.h"
#include "SST_charging_settings.h"

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

const uint16 volt2PrcTable[VOLT2PERCENTAGE_ARRAY_SIZE][2] =
{
//  CHRG                    NOCHRG      %
    {4201,                  4092},      //100
    {4200,                  4038},      //95
    {4199,                  3962},      //90
    {4152,                  3902},      //85
    {4101,                  3849},      //80
    {4049,                  3795},      //75
    {3998,                  3744},      //70
    {3949,                  3699},      //65
    {3902,                  3657},      //60
    {3861,                  3621},      //55
    {3827,                  3591},      //50
    {3798,                  3566},      //45
    {3774,                  3543},      //40
    {3752,                  3522},      //35
    {3732,                  3500},      //30
    {3713,                  3478},      //25
    {3692,                  LOW_BATTERY20_THRESHOLD},      //20
    {3668,                  3426},      //15
    {3635,                  LOW_BATTERY10_THRESHOLD},      //10
    {BATTERY_OK_LEVEL_5,    LOW_BATTERY5_THRESHOLD},       //5
    {3494,                  3089},      //0
};

/* Private function prototypes -----------------------------------------------*/

/* Private user code ---------------------------------------------------------*/

/* Global  user code ---------------------------------------------------------*/

/* CallBack Functions ---------------------------------------------------------*/

#ifdef __cplusplus
}
#endif
/* [] END OF FILE */