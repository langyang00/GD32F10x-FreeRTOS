#ifndef LED_H
#define LED_H

#ifdef cplusplus
 extern "C" {
#endif

#include "gd32f10x.h"

#define LED_GPIO_CLK                    RCU_GPIOC
#define LED_GPIO_PORT                  	GPIOC
#define LED_PIN                         GPIO_PIN_13


void led_init(void);
void led_on(void);
void led_off(void);
void led_toggle(void);


#endif /* LED_H */

