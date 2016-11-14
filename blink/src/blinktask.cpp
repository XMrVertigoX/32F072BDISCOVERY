#include <stm32f0xx.h>
#include <stm32f0xx_conf.h>

#include <stm32f072b_discovery.h>

#include <FreeRTOS.h>
#include <task.h>

#include <xXx/os/arduinotask.hpp>

#include "blinktask.hpp"

BlinkTask::BlinkTask() : ArduinoTask(256, 1) {}

BlinkTask::~BlinkTask() {}

void BlinkTask::setup() {
    STM_EVAL_LEDInit(LED3);
    STM_EVAL_LEDInit(LED4);
}

void BlinkTask::loop() {
    vTaskDelay(500 / portTICK_PERIOD_MS);

    STM_EVAL_LEDToggle(LED3);
    STM_EVAL_LEDToggle(LED4);
}
