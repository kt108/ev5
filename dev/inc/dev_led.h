#ifndef __DEV_LED__H
#define __DEV_LED__H
#include "gpio.h"
#include "sys.h"
#include "nuc123.h"





#define IO_LED_PWR PC12
#define IO_LED_ONHOOK PC11



extern void dev_led_init(void);


#endif

