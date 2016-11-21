#include <FreeRTOS.h>
#include <task.h>

#include <xXx/os/arduinotask.hpp>

#include "blinktask.hpp"

BlinkTask::BlinkTask() : ArduinoTask(256, 1) {}

BlinkTask::~BlinkTask() {}

void BlinkTask::setup() {}

void BlinkTask::loop() {
    vTaskDelay(500 / portTICK_PERIOD_MS);
}
