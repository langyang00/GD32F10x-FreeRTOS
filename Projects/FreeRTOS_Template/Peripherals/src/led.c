#include "led.h"

void led_init(void)
{
    /* enable the led clock */
    rcu_periph_clock_enable(LED_GPIO_CLK);
    /* configure led GPIO port */ 
    gpio_init(LED_GPIO_PORT, GPIO_MODE_OUT_PP, GPIO_OSPEED_50MHZ, LED_PIN);

    GPIO_BC(LED_GPIO_PORT) = LED_PIN;
}

void led_on(void)
{
	GPIO_BC(LED_GPIO_PORT) = LED_PIN;
}

void led_off(void)
{
	GPIO_BOP(LED_GPIO_PORT) = LED_PIN;
}

void led_toggle(void)
{
	gpio_bit_write(LED_GPIO_PORT, LED_PIN, 
		(bit_status)(1 - gpio_input_bit_get(LED_GPIO_PORT, LED_PIN)));
}

