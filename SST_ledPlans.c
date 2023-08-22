//
// Created by konst on 5/26/2021.
//

#ifndef IMPAX_IO_PROJECT_SST_LED_PLANS_H
#define IMPAX_IO_PROJECT_SST_LED_PLANS_H

#include "SST_ledPlans.h"
#include "math.h"

#define ENTER_EXIT_DARK_MODE_PLAN_SIZE (MAX_OF_LEDS)
LedSettings_t ledsEnterExitDarkModePlan[ENTER_EXIT_DARK_MODE_PLAN_SIZE] =
{
	{.ledId = 0,  .offset = 0, .duration = 600, .color = REMINDER_DEFAULT_COLOR, .mode = Blink, .period = 200},
	{.ledId = 1,  .offset = 0, .duration = 600, .color = REMINDER_DEFAULT_COLOR, .mode = Blink, .period = 200},
	{.ledId = 2,  .offset = 0, .duration = 600, .color = REMINDER_DEFAULT_COLOR, .mode = Blink, .period = 200},
	{.ledId = 3,  .offset = 0, .duration = 600, .color = REMINDER_DEFAULT_COLOR, .mode = Blink, .period = 200},
	{.ledId = 4,  .offset = 0, .duration = 600, .color = REMINDER_DEFAULT_COLOR, .mode = Blink, .period = 200},
	{.ledId = 5,  .offset = 0, .duration = 600, .color = REMINDER_DEFAULT_COLOR, .mode = Blink, .period = 200},
	{.ledId = 6,  .offset = 0, .duration = 600, .color = REMINDER_DEFAULT_COLOR, .mode = Blink, .period = 200},
	{.ledId = 7,  .offset = 0, .duration = 600, .color = REMINDER_DEFAULT_COLOR, .mode = Blink, .period = 200},
	{.ledId = 8,  .offset = 0, .duration = 600, .color = REMINDER_DEFAULT_COLOR, .mode = Blink, .period = 200},
	{.ledId = 9,  .offset = 0, .duration = 600, .color = REMINDER_DEFAULT_COLOR, .mode = Blink, .period = 200},
	{.ledId = 10, .offset = 0, .duration = 600, .color = REMINDER_DEFAULT_COLOR, .mode = Blink, .period = 200},
	{.ledId = 11, .offset = 0, .duration = 600, .color = REMINDER_DEFAULT_COLOR, .mode = Blink, .period = 200},
};

plan_t enterExitDarkModePlan =
{
	ENTER_EXIT_DARK_MODE_PLAN_SIZE, 
	(LedSettings_t *const)ledsEnterExitDarkModePlan,
    1
};

#define REMINDER_PLAN_SIZE (MAX_OF_LEDS)
/*const */LedSettings_t ledsReminderPlan[REMINDER_PLAN_SIZE] =
{ /* can't be const since we can change the color on runtime */
	{.ledId = 0, .offset = 0,   .duration = 3000, .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
	{.ledId = 1, .offset = 100, .duration = 3000, .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
	{.ledId = 2, .offset = 200, .duration = 3000, .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
	{.ledId = 3, .offset = 300, .duration = 3000, .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
	{.ledId = 4, .offset = 400, .duration = 3000, .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
	{.ledId = 5, .offset = 500, .duration = 3000, .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
	{.ledId = 6, .offset = 600, .duration = 3000, .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
	{.ledId = 7, .offset = 700, .duration = 3000, .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
	{.ledId = 8, .offset = 800, .duration = 3000, .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
	{.ledId = 9, .offset = 900, .duration = 3000, .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
	{.ledId = 10, .offset = 1000, .duration = 3000, .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
	{.ledId = 11, .offset = 1100, .duration = 3000, .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
};

/*const*/ plan_t reminderPlan =
{
	REMINDER_PLAN_SIZE, 
	(LedSettings_t *const)ledsReminderPlan,
    1
};

#define OPEN_PLAN_SIZE (MAX_OF_LEDS)
LedSettings_t ledsOpenPlan[OPEN_PLAN_SIZE] =
{
	{.ledId = 1, .offset = 0,   .duration = 300000, .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
};

plan_t openPlan =
{
	OPEN_PLAN_SIZE, 
	(LedSettings_t *const)ledsOpenPlan,
    1
};

#define CLOSE_PLAN_SIZE (MAX_OF_LEDS)
LedSettings_t ledsClosePlan[CLOSE_PLAN_SIZE] =
{
	{.ledId = 0,  .offset = 1100, .duration = 200,  .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
	{.ledId = 1,  .offset = 1000, .duration = 200,  .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
	{.ledId = 2,  .offset = 900,  .duration = 200,  .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
	{.ledId = 3,  .offset = 800,  .duration = 200,  .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
	{.ledId = 4,  .offset = 700,  .duration = 200,  .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
	{.ledId = 5,  .offset = 600,  .duration = 200,  .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
	{.ledId = 6,  .offset = 500,  .duration = 200,  .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
	{.ledId = 7,  .offset = 400,  .duration = 200,  .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
	{.ledId = 8,  .offset = 300,  .duration = 200,  .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
	{.ledId = 9,  .offset = 200,  .duration = 200,  .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
	{.ledId = 10, .offset = 100,  .duration = 200,  .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50},
	{.ledId = 11, .offset = 0,    .duration = 200,  .color.r = 80, .color.g = 80, .color.b = 80, .mode = Stable, .period = 50}
};

plan_t closePlan =
{
	CLOSE_PLAN_SIZE, 
	(LedSettings_t *const)ledsClosePlan,
    1
};

#define WHO_AM_I_PLAN_SIZE (1)
LedSettings_t ledsWhoAmIPlan[WHO_AM_I_PLAN_SIZE] =
{
	{.ledId = 1, .offset = 0,   .duration = 5000, .color.r = 80, .color.g = 80, .color.b = 80, .mode = Blink, .period = 100}
};

plan_t whoAmIPlan =
{
	WHO_AM_I_PLAN_SIZE, 
	(LedSettings_t *const)ledsWhoAmIPlan,
    1
};

#define LOW_BATTERY_PLAN_SIZE (3)
LedSettings_t ledsLowBatteryPlan[LOW_BATTERY_PLAN_SIZE] =
{
	{.ledId = 0, .offset = 0, .duration = 5000, .color = LOW_BATTERY_LED_COLOR, .mode = Stable, .period = 200},
	{.ledId = 1, .offset = 0, .duration = 5000, .color = LOW_BATTERY_LED_COLOR, .mode = Stable, .period = 200},
    {.ledId = 2, .offset = 0, .duration = 5000, .color = LOW_BATTERY_LED_COLOR, .mode = Blink,  .period = 200},
    
};

plan_t lowBatteryPlan =
{
	LOW_BATTERY_PLAN_SIZE, 
	(LedSettings_t *const)ledsLowBatteryPlan,
    1
};

#define PAIRING_PLAN_SIZE (MAX_OF_LEDS*2)
LedSettings_t ledsPairingPlan[PAIRING_PLAN_SIZE] =
{
	{.ledId = 0,  .offset = 0,    .duration = PAIRING_LED_DURATION,      .color = PAIRING_LED_COLOR, .mode = Stable,    .period = 50},
	{.ledId = 1,  .offset = 50,   .duration = PAIRING_LED_DURATION-50,   .color = PAIRING_LED_COLOR, .mode = Stable,    .period = 50},
	{.ledId = 2,  .offset = 100,  .duration = PAIRING_LED_DURATION-100,  .color = PAIRING_LED_COLOR, .mode = Stable,    .period = 50},
	{.ledId = 3,  .offset = 150,  .duration = PAIRING_LED_DURATION-150,  .color = PAIRING_LED_COLOR, .mode = Stable,    .period = 50},
	{.ledId = 4,  .offset = 200,  .duration = PAIRING_LED_DURATION-200,  .color = PAIRING_LED_COLOR, .mode = Stable,    .period = 50},
	{.ledId = 5,  .offset = 250,  .duration = PAIRING_LED_DURATION-250,  .color = PAIRING_LED_COLOR, .mode = Stable,    .period = 50},
	{.ledId = 6,  .offset = 300,  .duration = PAIRING_LED_DURATION-300,  .color = PAIRING_LED_COLOR, .mode = Stable,    .period = 50},
	{.ledId = 7,  .offset = 350,  .duration = PAIRING_LED_DURATION-350,  .color = PAIRING_LED_COLOR, .mode = Stable,    .period = 50},
	{.ledId = 8,  .offset = 400,  .duration = PAIRING_LED_DURATION-400,  .color = PAIRING_LED_COLOR, .mode = Stable,    .period = 50},
	{.ledId = 9,  .offset = 450,  .duration = PAIRING_LED_DURATION-450,  .color = PAIRING_LED_COLOR, .mode = Stable,    .period = 50},
	{.ledId = 10, .offset = 500,  .duration = PAIRING_LED_DURATION-500,  .color = PAIRING_LED_COLOR, .mode = Stable,    .period = 50},
	{.ledId = 11, .offset = 550,  .duration = PAIRING_LED_DURATION-550,  .color = PAIRING_LED_COLOR, .mode = Stable,    .period = 50},
	{.ledId = 0,  .offset = PAIRING_LED_DURATION, .duration = 120000,    .color = PAIRING_LED_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 1,  .offset = PAIRING_LED_DURATION, .duration = 120000,    .color = PAIRING_LED_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 2,  .offset = PAIRING_LED_DURATION, .duration = 120000,    .color = PAIRING_LED_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 3,  .offset = PAIRING_LED_DURATION, .duration = 120000,    .color = PAIRING_LED_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 4,  .offset = PAIRING_LED_DURATION, .duration = 120000,    .color = PAIRING_LED_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 5,  .offset = PAIRING_LED_DURATION, .duration = 120000,    .color = PAIRING_LED_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 6,  .offset = PAIRING_LED_DURATION, .duration = 120000,    .color = PAIRING_LED_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 7,  .offset = PAIRING_LED_DURATION, .duration = 120000,    .color = PAIRING_LED_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 8,  .offset = PAIRING_LED_DURATION, .duration = 120000,    .color = PAIRING_LED_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 9,  .offset = PAIRING_LED_DURATION, .duration = 120000,    .color = PAIRING_LED_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 10, .offset = PAIRING_LED_DURATION, .duration = 120000,    .color = PAIRING_LED_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 11, .offset = PAIRING_LED_DURATION, .duration = 120000,    .color = PAIRING_LED_COLOR, .mode = Breathing, .period = 50},
};

plan_t pairingPlan =
{
	PAIRING_PLAN_SIZE, 
	(LedSettings_t *const)ledsPairingPlan,
    250
};

#define PAIRING_FOUND_PLAN_SIZE (MAX_OF_LEDS * 2)
LedSettings_t ledsPairingFoundPlan[PAIRING_FOUND_PLAN_SIZE] =
{
	{.ledId = 0,  .offset = 0,     .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 1,  .offset = 50,    .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 2,  .offset = 100,   .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 3,  .offset = 150,   .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 4,  .offset = 200,   .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 5,  .offset = 250,   .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 6,  .offset = 300,   .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 7,  .offset = 350,   .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 8,  .offset = 400,   .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 9,  .offset = 450,   .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 10, .offset = 500,   .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 11, .offset = 550,   .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 11, .offset = 850,   .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 10, .offset = 900,   .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 9,  .offset = 950,   .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 8,  .offset = 1000,  .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 7,  .offset = 1050,  .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 6,  .offset = 1200,  .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 5,  .offset = 1250,  .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 4,  .offset = 1300,  .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 3,  .offset = 1350,  .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 2,  .offset = 1400,  .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 1,  .offset = 1450,  .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 0,  .offset = 1500,  .duration = PAIRING_FOUND_LED_DURATION, .color = PAIRING_LED_COLOR, .mode = Stable, .period = 50},
};

plan_t pairingFoundPlan =
{
	PAIRING_FOUND_PLAN_SIZE, 
	(LedSettings_t *const)ledsPairingFoundPlan,
    10
};

#define PAIRING_COMPLETE_PLAN_SIZE (MAX_OF_LEDS)
LedSettings_t ledsPairingCompletePlan[PAIRING_COMPLETE_PLAN_SIZE] =
{
	{.ledId = 0,  .offset = 0, .duration = 3000, .color = PAIRING_LED_COLOR, .mode = Breathing2, .period = 100},
	{.ledId = 1,  .offset = 0, .duration = 3000, .color = PAIRING_LED_COLOR, .mode = Breathing2, .period = 100},
	{.ledId = 2,  .offset = 0, .duration = 3000, .color = PAIRING_LED_COLOR, .mode = Breathing2, .period = 100},
	{.ledId = 3,  .offset = 0, .duration = 3000, .color = PAIRING_LED_COLOR, .mode = Breathing2, .period = 100},
	{.ledId = 4,  .offset = 0, .duration = 3000, .color = PAIRING_LED_COLOR, .mode = Breathing2, .period = 100},
	{.ledId = 5,  .offset = 0, .duration = 3000, .color = PAIRING_LED_COLOR, .mode = Breathing2, .period = 100},
	{.ledId = 6,  .offset = 0, .duration = 3000, .color = PAIRING_LED_COLOR, .mode = Breathing2, .period = 100},
	{.ledId = 7,  .offset = 0, .duration = 3000, .color = PAIRING_LED_COLOR, .mode = Breathing2, .period = 100},
	{.ledId = 8,  .offset = 0, .duration = 3000, .color = PAIRING_LED_COLOR, .mode = Breathing2, .period = 100},
	{.ledId = 9,  .offset = 0, .duration = 3000, .color = PAIRING_LED_COLOR, .mode = Breathing2, .period = 100},
	{.ledId = 10, .offset = 0, .duration = 3000, .color = PAIRING_LED_COLOR, .mode = Breathing2, .period = 100},
	{.ledId = 11, .offset = 0, .duration = 3000, .color = PAIRING_LED_COLOR, .mode = Breathing2, .period = 100},
};

plan_t pairingCompletePlan =
{
	PAIRING_COMPLETE_PLAN_SIZE,
	(LedSettings_t *const)ledsPairingCompletePlan,
    1
};

#define DEAD_BATTERY_PLAN_SIZE (1)
//#define DEAD_BATTERY_PLAN_SIZE (21)

LedSettings_t ledsDeadBatteryPlan[DEAD_BATTERY_PLAN_SIZE] =
{
	{.ledId = 0, .offset = 0,   .duration = 5000, .color = LOW_BATTERY_LED_COLOR, .mode = Blink, .period = 200},
};

plan_t deadBatteryPlan =
{
	DEAD_BATTERY_PLAN_SIZE,
	(LedSettings_t *const)ledsDeadBatteryPlan,
    200
};

#define CUSTOM_PLAN1_SIZE (MAX_OF_LEDS)
LedSettings_t ledsCustomPlan1[CUSTOM_PLAN1_SIZE] =
{
	{.ledId = 1, .offset = 0, 	 .duration = 1000, .color.r = 255, .color.g = 0, .color.b = 0, .mode = Stable, .period = 0},
};

plan_t customPlan1 = 
{
	0, 
	(LedSettings_t *const)ledsCustomPlan1, 
    1
};

static /*const*/ LedSettings_t ledsRunTime[MAX_OF_LEDS*2];

 /*const*/ plan_t runTimePlan =
{
	MAX_OF_LEDS*2,
	(LedSettings_t *)ledsRunTime,
    1
}; 

#define REMINDER_PULSE_PLAN_SIZE (MAX_OF_LEDS)
/*const*/ LedSettings_t ledsReminderPulsePlan[REMINDER_PULSE_PLAN_SIZE] =
{
	{.ledId = 0, .offset = 0,  .duration = REMINDER_PULSE_LED_DURATION, .color = REMINDER_DEFAULT_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 1, .offset = 0,  .duration = REMINDER_PULSE_LED_DURATION, .color = REMINDER_DEFAULT_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 2, .offset = 0,  .duration = REMINDER_PULSE_LED_DURATION, .color = REMINDER_DEFAULT_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 3, .offset = 0,  .duration = REMINDER_PULSE_LED_DURATION, .color = REMINDER_DEFAULT_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 4, .offset = 0,  .duration = REMINDER_PULSE_LED_DURATION, .color = REMINDER_DEFAULT_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 5, .offset = 0,  .duration = REMINDER_PULSE_LED_DURATION, .color = REMINDER_DEFAULT_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 6, .offset = 0,  .duration = REMINDER_PULSE_LED_DURATION, .color = REMINDER_DEFAULT_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 7, .offset = 0,  .duration = REMINDER_PULSE_LED_DURATION, .color = REMINDER_DEFAULT_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 8, .offset = 0,  .duration = REMINDER_PULSE_LED_DURATION, .color = REMINDER_DEFAULT_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 9, .offset = 0,  .duration = REMINDER_PULSE_LED_DURATION, .color = REMINDER_DEFAULT_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 10, .offset = 0, .duration = REMINDER_PULSE_LED_DURATION, .color = REMINDER_DEFAULT_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 11, .offset = 0, .duration = REMINDER_PULSE_LED_DURATION, .color = REMINDER_DEFAULT_COLOR, .mode = Breathing, .period = 50},
};

/*const*/ plan_t reminderPulsePlan = 
{
	REMINDER_PULSE_PLAN_SIZE, 
	(LedSettings_t *const)ledsReminderPulsePlan,
    1
};

#define REMINDER_BOUNCE_PLAN_SIZE (MAX_OF_LEDS * 2)
/*const*/ LedSettings_t ledsReminderBouncePlan[REMINDER_BOUNCE_PLAN_SIZE] =
{
	{.ledId = 0, .offset = 0,     .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
	{.ledId = 1, .offset = 50,    .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
	{.ledId = 2, .offset = 100,   .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
	{.ledId = 3, .offset = 150,   .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
	{.ledId = 4, .offset = 200,   .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
	{.ledId = 5, .offset = 250,   .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
	{.ledId = 6, .offset = 300,   .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
	{.ledId = 7, .offset = 350,   .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
	{.ledId = 8, .offset = 400,   .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
	{.ledId = 9, .offset = 450,   .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
	{.ledId = 10, .offset = 500,  .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
	{.ledId = 11, .offset = 550,  .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
	{.ledId = 11, .offset = 1500, .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
	{.ledId = 10, .offset = 1550, .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
	{.ledId = 9, .offset = 1600,  .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
	{.ledId = 8, .offset = 1650,  .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
	{.ledId = 7, .offset = 1700,  .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
	{.ledId = 6, .offset = 1750,  .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
	{.ledId = 5, .offset = 1800,  .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
	{.ledId = 4, .offset = 1850,  .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
	{.ledId = 3, .offset = 1900,  .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
	{.ledId = 2, .offset = 1950,  .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
	{.ledId = 1, .offset = 2000,  .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
	{.ledId = 0, .offset = 2050,  .duration = REMINDER_BOUNCE_LED_DURATION, .color = (color_t)REMINDER_DEFAULT_COLOR, .mode = Stable, .period = 50},
};

/*const*/ plan_t reminderBouncePlan = 
{
	REMINDER_BOUNCE_PLAN_SIZE, 
	(LedSettings_t *const)ledsReminderBouncePlan,
    1
};

#define GOAL_REACHED_PLAN_SIZE (MAX_OF_LEDS * 2)
LedSettings_t ledsGoalReachedPlan[GOAL_REACHED_PLAN_SIZE] =
{
	{.ledId = 0,  .offset = 0,   .duration = GOAL_REACHED_LED_DURATION,     .color = GOAL_REACHED_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 1,  .offset = 50,  .duration = GOAL_REACHED_LED_DURATION-50,  .color = GOAL_REACHED_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 2,  .offset = 100, .duration = GOAL_REACHED_LED_DURATION-100, .color = GOAL_REACHED_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 3,  .offset = 150, .duration = GOAL_REACHED_LED_DURATION-150, .color = GOAL_REACHED_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 4,  .offset = 200, .duration = GOAL_REACHED_LED_DURATION-200, .color = GOAL_REACHED_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 5,  .offset = 250, .duration = GOAL_REACHED_LED_DURATION-250, .color = GOAL_REACHED_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 6,  .offset = 300, .duration = GOAL_REACHED_LED_DURATION-300, .color = GOAL_REACHED_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 7,  .offset = 350, .duration = GOAL_REACHED_LED_DURATION-350, .color = GOAL_REACHED_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 8,  .offset = 400, .duration = GOAL_REACHED_LED_DURATION-400, .color = GOAL_REACHED_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 9,  .offset = 450, .duration = GOAL_REACHED_LED_DURATION-450, .color = GOAL_REACHED_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 10, .offset = 500, .duration = GOAL_REACHED_LED_DURATION-500, .color = GOAL_REACHED_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 11, .offset = 550, .duration = GOAL_REACHED_LED_DURATION-550, .color = GOAL_REACHED_LED_COLOR, .mode = Stable, .period = 50},
	{.ledId = 0,  .offset = GOAL_REACHED_LED_DURATION, .duration = 6000, .color = GOAL_REACHED_LED_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 1,  .offset = GOAL_REACHED_LED_DURATION, .duration = 6000, .color = GOAL_REACHED_LED_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 2,  .offset = GOAL_REACHED_LED_DURATION, .duration = 6000, .color = GOAL_REACHED_LED_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 3,  .offset = GOAL_REACHED_LED_DURATION, .duration = 6000, .color = GOAL_REACHED_LED_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 4,  .offset = GOAL_REACHED_LED_DURATION, .duration = 6000, .color = GOAL_REACHED_LED_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 5,  .offset = GOAL_REACHED_LED_DURATION, .duration = 6000, .color = GOAL_REACHED_LED_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 6,  .offset = GOAL_REACHED_LED_DURATION, .duration = 6000, .color = GOAL_REACHED_LED_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 7,  .offset = GOAL_REACHED_LED_DURATION, .duration = 6000, .color = GOAL_REACHED_LED_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 8,  .offset = GOAL_REACHED_LED_DURATION, .duration = 6000, .color = GOAL_REACHED_LED_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 9,  .offset = GOAL_REACHED_LED_DURATION, .duration = 6000, .color = GOAL_REACHED_LED_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 10, .offset = GOAL_REACHED_LED_DURATION, .duration = 6000, .color = GOAL_REACHED_LED_COLOR, .mode = Breathing, .period = 50},
	{.ledId = 11, .offset = GOAL_REACHED_LED_DURATION, .duration = 6000, .color = GOAL_REACHED_LED_COLOR, .mode = Breathing, .period = 50},
};

/*const*/ plan_t goalReachedPlan = 
{
	GOAL_REACHED_PLAN_SIZE, 
	(LedSettings_t *const)ledsGoalReachedPlan,
    2
};

#define GOAL_FILLED_UP_PLAN_SIZE (MAX_OF_LEDS)
LedSettings_t ledsFilledUpPlan[GOAL_FILLED_UP_PLAN_SIZE] =
{
	{.ledId = 0,  .offset = 0, .duration = 600, .color = FILLED_UP_COLOR, .mode = Blink, .period = 200},
	{.ledId = 1,  .offset = 0, .duration = 600, .color = FILLED_UP_COLOR, .mode = Blink, .period = 200},
	{.ledId = 2,  .offset = 0, .duration = 600, .color = FILLED_UP_COLOR, .mode = Blink, .period = 200},
	{.ledId = 3,  .offset = 0, .duration = 600, .color = FILLED_UP_COLOR, .mode = Blink, .period = 200},
	{.ledId = 4,  .offset = 0, .duration = 600, .color = FILLED_UP_COLOR, .mode = Blink, .period = 200},
	{.ledId = 5,  .offset = 0, .duration = 600, .color = FILLED_UP_COLOR, .mode = Blink, .period = 200},
	{.ledId = 6,  .offset = 0, .duration = 600, .color = FILLED_UP_COLOR, .mode = Blink, .period = 200},
	{.ledId = 7,  .offset = 0, .duration = 600, .color = FILLED_UP_COLOR, .mode = Blink, .period = 200},
	{.ledId = 8,  .offset = 0, .duration = 600, .color = FILLED_UP_COLOR, .mode = Blink, .period = 200},
	{.ledId = 9,  .offset = 0, .duration = 600, .color = FILLED_UP_COLOR, .mode = Blink, .period = 200},
	{.ledId = 10, .offset = 0, .duration = 600, .color = FILLED_UP_COLOR, .mode = Blink, .period = 200},
	{.ledId = 11, .offset = 0, .duration = 600, .color = FILLED_UP_COLOR, .mode = Blink, .period = 200},
};

plan_t filledUpPlan =
{
    GOAL_FILLED_UP_PLAN_SIZE,
    (LedSettings_t *const)ledsFilledUpPlan,
    1
};
#define LED_TEST_PLAN_SIZE (MAX_OF_LEDS)
LedSettings_t ledsTestPlan[LED_TEST_PLAN_SIZE] =
{
    {.ledId = 0,  .offset = 0,    .duration = 120, .color = {255,255,255}, .mode = Stable, .period = 50},
    {.ledId = 1,  .offset = 118,  .duration = 120, .color = {255,255,255}, .mode = Stable, .period = 50},
    {.ledId = 2,  .offset = 236,  .duration = 120, .color = {255,255,255}, .mode = Stable, .period = 50},
    {.ledId = 3,  .offset = 354,  .duration = 120, .color = {255,255,255}, .mode = Stable, .period = 50},
    {.ledId = 4,  .offset = 472,  .duration = 120, .color = {255,255,255}, .mode = Stable, .period = 50},
    {.ledId = 5,  .offset = 590,  .duration = 120, .color = {255,255,255}, .mode = Stable, .period = 50},
    {.ledId = 6,  .offset = 708,  .duration = 120, .color = {255,255,255}, .mode = Stable, .period = 50},
    {.ledId = 7,  .offset = 826,  .duration = 120, .color = {255,255,255}, .mode = Stable, .period = 50},
    {.ledId = 8,  .offset = 944,  .duration = 120, .color = {255,255,255}, .mode = Stable, .period = 50},
    {.ledId = 9,  .offset = 1062, .duration = 120, .color = {255,255,255}, .mode = Stable, .period = 50},
    {.ledId = 10, .offset = 1180, .duration = 120, .color = {255,255,255}, .mode = Stable, .period = 50},
    {.ledId = 11, .offset = 1298, .duration = 120, .color = {255,255,255}, .mode = Stable, .period = 50},
    
};
plan_t TestPlan =
{
    LED_TEST_PLAN_SIZE,
    (LedSettings_t *const)ledsTestPlan,
    20
};

// all plans will be stored here, the order should be same as planId_t. 
plan_t* plans[LED_PLAN_ID_MAX_PLANS] =
{
    NULL,                       // 0       LED_PLAN_ID_CONNECTION,                //&connectPlan,
    &reminderPlan,              // 1       LED_PLAN_ID_REMINDER,                  //
    NULL,                       // 2       LED_PLAN_ID_OPEN_EVENT,                //&openPlan,
    NULL,                       // 3       LED_PLAN_ID_CLOSE_EVENT,               //&closePlan,
    &whoAmIPlan,                // 4       LED_PLAN_ID_WHO_I_AM,
    NULL,                       // 5       LED_PLAN_ID_CUSTOM,                    //&LED_PLAN_ID_CUSTOM,
    &runTimePlan,               // 6       LED_PLAN_ID_BATTERY_LEVEL,             //located in RAM, battery level
    &lowBatteryPlan,            // 7       LED_PLAN_ID_LOW_BATTERY_LEVEL,         //
    &runTimePlan,               // 8       LED_PLAN_ID_HYDRATION_LEVEL,           //located in RAM, hydration level
    &pairingPlan,               // 9       LED_PLAN_ID_PAIRING,
    &pairingFoundPlan,          // 10      LED_PLAN_ID_PAIRING_FOUND,
    &deadBatteryPlan,           // 11      LED_PLAN_ID_DEAD_BATTERY,
    &reminderPulsePlan,         // 12      LED_PLAN_ID_REMINDER_PULSE,
    &reminderBouncePlan,        // 13      LED_PLAN_ID_REMINDER_BOUNCE,
    &goalReachedPlan,           // 14      LED_PLAN_ID_GOAL_REACHED,
    &pairingCompletePlan,       // 15      LED_PLAN_ID_PAIRING_COMPLETE,
    &enterExitDarkModePlan,     // 16      LED_PLAN_ID_ENTER_EXIT_DARK_MODE,
    &filledUpPlan,              // 17      LED_PLAN_ID_FILLED_UP,
    &TestPlan                   // 18      LED_PLAN_ID_TEST
};


#endif //IMPAX_IO_PROJECT_SST_LED_PLANS_H
