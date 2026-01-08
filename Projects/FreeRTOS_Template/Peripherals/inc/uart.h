#ifndef UART_H
#define UART_H

#ifdef cplusplus
 extern "C" {
#endif

#include <stdio.h>
#include "gd32f10x.h"

void uart_init(uint32_t baudval);
void uart_send_byte(uint8_t ch);
void uart_send_string(uint8_t *ch);

#endif /* UART_H */

