#include <stm32f0xx.h>
#include <stm32f0xx_conf.h>

#include <stm32f072b_discovery.h>

#include <FreeRTOS.h>
#include <task.h>

#include <xXx/os/arduinotask.hpp>

#include <blinktask1.hpp>

BlinkTask1::BlinkTask1() : ArduinoTask(256, 1) {}

BlinkTask1::~BlinkTask1() {}

void BlinkTask1::setup() {
    STM_EVAL_LEDInit(LED3);
    STM_EVAL_LEDInit(LED6);
}

void BlinkTask1::loop() {
    STM_EVAL_LEDToggle(LED3);
    STM_EVAL_LEDToggle(LED6);

    vTaskDelay(500 / portTICK_PERIOD_MS);
}
