#ifndef __UATR_H_
#define __UATR_H_


#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/uart_select.h"
#include "driver/gpio.h"

#define USART_UX  UART_NUM_0
#define USATR_TX_GPIO_PIN GPIO_NUM_43
#define USATR_RX_GPIO_PIN GPIO_NUM_44

#define RX_BUFF_SIZE  1024

void uart_init(uint32_t baudrate)


#endif
