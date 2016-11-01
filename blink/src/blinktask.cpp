#include <stm32f0xx.h>

#include <FreeRTOS.h>
#include <task.h>

#include <xXx/os/arduinotask.hpp>

#include "blinktask.hpp"

BlinkTask::BlinkTask(GPIO_InitTypeDef &GPIO_InitStructure)
    : _GPIO_InitStructure(GPIO_InitStructure) {}

BlinkTask::~BlinkTask() {}

void BlinkTask::setup() {}

void BlinkTask::loop() {
    GPIO_SetBits(GPIOC, GPIO_Pin_6 | GPIO_Pin_7 | GPIO_Pin_8 | GPIO_Pin_9);
    vTaskDelay(500 / portTICK_PERIOD_MS);
    GPIO_ResetBits(GPIOC, GPIO_Pin_6 | GPIO_Pin_7 | GPIO_Pin_8 | GPIO_Pin_9);
    vTaskDelay(500 / portTICK_PERIOD_MS);
}
