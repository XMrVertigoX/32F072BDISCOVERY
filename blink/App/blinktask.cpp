#include <FreeRTOS.h>
#include <task.h>

#include <xXx/os/arduinotask.hpp>

#include "blinktask.hpp"

#define TICKS2MS(m) (m / portTICK_PERIOD_MS)
#define MS2TICKS(t) (t * portTICK_PERIOD_MS)

using namespace xXx;

BlinkTask::BlinkTask() : ArduinoTask(128, 1) {}

BlinkTask::~BlinkTask() {}

void BlinkTask::setup() {}

void BlinkTask::loop() {
    // _led3.toggle();

    vTaskDelay(TICKS2MS(125));

    // _led3.toggle();
    // _led5.toggle();

    vTaskDelay(TICKS2MS(125));

    // _led5.toggle();
    // _led6.toggle();

    vTaskDelay(TICKS2MS(125));

    // _led6.toggle();
    // _led4.toggle();

    vTaskDelay(TICKS2MS(125));

    // _led4.toggle();
}
