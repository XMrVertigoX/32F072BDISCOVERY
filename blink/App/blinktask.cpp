#include <stm32f0xx_hal_conf.h>

#include <FreeRTOS.h>
#include <queue.h>
#include <task.h>

#include <xXx/os/arduinotask.hpp>
#include <xXx/templates/queue.hpp>

#include "blinktask.hpp"

#define TICKS2MS(millis) (millis / portTICK_PERIOD_MS)
#define MS2TICKS(millis) (millis / portTICK_PERIOD_MS)

using namespace xXx;

BlinkTask::BlinkTask(Queue<int> &queue) : ArduinoTask(256, 1), _queue(queue) {}

BlinkTask::~BlinkTask() {}

void BlinkTask::setup() {}

void BlinkTask::loop() {
    HAL_GPIO_TogglePin(GPIOC, LD3_Pin | LD4_Pin | LD5_Pin | LD6_Pin);
    vTaskDelay(TICKS2MS(500));
}
