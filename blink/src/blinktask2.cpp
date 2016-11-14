#include <stm32f0xx.h>
#include <stm32f0xx_conf.h>

#include <stm32f072b_discovery.h>

#include <FreeRTOS.h>
#include <task.h>

#include <xXx/os/arduinotask.hpp>

#include <blinktask2.hpp>

BlinkTask2::BlinkTask2() : ArduinoTask(256, 1) {}

BlinkTask2::~BlinkTask2() {}

void BlinkTask2::setup() {
    STM_EVAL_LEDInit(LED4);
    STM_EVAL_LEDInit(LED5);
}

void BlinkTask2::loop() {
    STM_EVAL_LEDToggle(LED4);
    STM_EVAL_LEDToggle(LED5);

    vTaskDelay(250 / portTICK_PERIOD_MS);
}
