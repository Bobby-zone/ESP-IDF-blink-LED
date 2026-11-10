#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define LED1 GPIO_NUM_23
#define LED2 GPIO_NUM_22
#define LED3 GPIO_NUM_21

void app_main(void) {
  gpio_set_direction(LED1, GPIO_MODE_OUTPUT);
  gpio_set_direction(LED2, GPIO_MODE_OUTPUT);
  gpio_set_direction(LED3, GPIO_MODE_OUTPUT);

  while (1) {
    gpio_set_level(LED1, 1);
    vTaskDelay(pdMS_TO_TICKS(500));
    gpio_set_level(LED1, 0);
    gpio_set_level(LED2, 1);
    vTaskDelay(pdMS_TO_TICKS(500));
    gpio_set_level(LED2, 0);
    gpio_set_level(LED3, 1);
    vTaskDelay(pdMS_TO_TICKS(500));
    gpio_set_level(LED3, 0);
  }
}