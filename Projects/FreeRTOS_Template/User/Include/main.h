#ifndef MAIN_H
#define MAIN_H

#ifdef cplusplus
 extern "C" {
#endif

#define SYSTEM_SUPPORT_OS 1

#include <stdio.h>
#include "systick.h"
#include "led.h"
#include "uart.h"

#if SYSTEM_SUPPORT_OS
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "croutine.h"
#include "semphr.h"
#endif


#endif /* MAIN_H */


