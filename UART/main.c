#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "led.h"
#include "uart.h"

void app_main() 
{
  uint8_t len = 0;
  uint16_t times = 0;
  unsigned char data[RX_BUF_SIZE] = 0;

  led_init();
  uart_init(115200);

  while(1)
  {
    uart_get_buffered_data_len(USART_UX, (size_t*) &len)

    if (len>0)
    {
      memset(data, 0, RX_BUT_SIZE)
      printf("\n Message send:")
      uart_read_bytes(USART_UX, data,len,100);
      uart_write_bytes(USART_UX, (const char*)data, strlen((const char*)data));

    }

    else:
    {
      times++

      if (times %5000 == 0)
      {
        printf("\n esp32")
      }

      if (times%200 == 0)
      {
        printf("\n enter the data:")
      }

      if (times%20 == 0)
      {
        LED_TOGGLE();
      }

      vTaskDelay(10);
    }
  }
}