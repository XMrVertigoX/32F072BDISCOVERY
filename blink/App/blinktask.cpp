#include <FreeRTOS.h>
#include <queue.h>
#include <task.h>

#include <xXx/os/arduinotask.hpp>
#include <xXx/templates/queue.hpp>

#include "blinktask.hpp"

using namespace xXx;

BlinkTask::BlinkTask(Queue<int> &queue) : ArduinoTask(256, 1), _queue(queue) {}

BlinkTask::~BlinkTask() {}

void BlinkTask::setup() {}

void BlinkTask::loop() {
    vTaskDelay(500 / portTICK_PERIOD_MS);
}
