#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "led.h"
#include "esptim.h"

void app_main() 
{
  led_init();
  esptim_init(100000);

}
