#include <stm32f0xx.h>

#include <FreeRTOS.h>
#include <task.h>

#include <xXx/os/arduinotask.hpp>

#include "blinktask.hpp"

BlinkTask::BlinkTask(GPIO_InitTypeDef &GPIO_InitStructure)
    : ArduinoTask(256, 2), _GPIO_InitStructure(GPIO_InitStructure) {}

BlinkTask::~BlinkTask() {}

void BlinkTask::setup() {
    RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOC, ENABLE);

    _GPIO_InitStructure.GPIO_Pin =
        GPIO_Pin_6 | GPIO_Pin_7 | GPIO_Pin_8 | GPIO_Pin_9;
    _GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_OUT;
    _GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
    _GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    _GPIO_InitStructure.GPIO_PuPd  = GPIO_PuPd_NOPULL;

    GPIO_Init(GPIOC, &_GPIO_InitStructure);
}

void BlinkTask::loop() {
    GPIO_SetBits(GPIOC, GPIO_Pin_6 | GPIO_Pin_7 | GPIO_Pin_8 | GPIO_Pin_9);
    vTaskDelay(500 / portTICK_PERIOD_MS);
    GPIO_ResetBits(GPIOC, GPIO_Pin_6 | GPIO_Pin_7 | GPIO_Pin_8 | GPIO_Pin_9);
    vTaskDelay(500 / portTICK_PERIOD_MS);
}
