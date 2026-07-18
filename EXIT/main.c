#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "led.h"

void app_main() 
{

  led_init();

  while(1)
  {
    LED_TOGGLE();
    vTaskDelay(50);
  }
}
