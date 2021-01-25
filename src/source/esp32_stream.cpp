#include "esp32_stream.h"

#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include "esp_timer.h"

void delay(unsigned long millis) {
  vTaskDelay(pdMS_TO_TICKS(millis));
}

uint32_t millis() {
  return esp_timer_get_time()/1000;
}
