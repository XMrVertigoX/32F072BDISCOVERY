#include <FreeRTOS.h>
#include <task.h>

#include <xXx/os/arduinotask.hpp>

#include "blinktask.hpp"

#define TICKS2MS(m) (m / portTICK_PERIOD_MS)
#define MS2TICKS(t) (t * portTICK_PERIOD_MS)

using namespace xXx;

BlinkTask::BlinkTask()
    : ArduinoTask(128, 1), _leds{Led(LD3), Led(LD5), Led(LD6), Led(LD4)} {}

BlinkTask::~BlinkTask() {}

void BlinkTask::setup() {}

void BlinkTask::loop() {
    for (int i = 0; i < NUM_LEDS; ++i) {
        _leds[i].toggle();
        vTaskDelay(TICKS2MS(125));
        _leds[i].toggle();
    }
}
