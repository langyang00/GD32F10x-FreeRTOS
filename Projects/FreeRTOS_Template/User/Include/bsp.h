#ifndef BSP_H
#define BSP_H

#ifdef cplusplus
 extern "C" {
#endif

#include "gd32f10x.h"

#define LED_GPIO_CLK                    RCU_GPIOC
#define LED_GPIO_PORT                  	GPIOC
#define LED_PIN                         GPIO_PIN_13
#define USART_GPIO_CLK               		RCU_GPIOA
#define USART_CH_CLK               			RCU_USART0
#define USART_CH               					USART0
#define USART_GPIO_PORT_TX              GPIOA
#define USART_GPIO_PIN_TX               GPIO_PIN_9
#define USART_GPIO_PORT_RX              GPIOA
#define USART_GPIO_PIN_RX               GPIO_PIN_10


void led_init(void);
void led_on(void);
void led_off(void);
void led_toggle(void);
void usart_init(void);


#endif /* BSP_H */

