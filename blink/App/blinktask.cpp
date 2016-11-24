#include <stm32f0xx_hal.h>

#include <FreeRTOS.h>
#include <task.h>

#include <xXx/os/arduinotask.hpp>
#include <xXx/templates/queue.hpp>

#include "blinktask.hpp"

#define LED3_Pin GPIO_PIN_6
#define LED3_Port GPIOC
#define LED4_Pin GPIO_PIN_8
#define LED4_Port GPIOC
#define LED5_Pin GPIO_PIN_9
#define LED5_Port GPIOC
#define LED6_Pin GPIO_PIN_7
#define LED6_Port GPIOC

#define TICKS2MS(millis) (millis / portTICK_PERIOD_MS)
#define MS2TICKS(millis) (millis * portTICK_PERIOD_MS)

using namespace xXx;

BlinkTask::BlinkTask() : ArduinoTask(128, 1) {}

BlinkTask::~BlinkTask() {}

void BlinkTask::setup() {}

void BlinkTask::loop() {
    HAL_GPIO_TogglePin(LED3_Port, LED3_Pin);
    vTaskDelay(TICKS2MS(125));
    HAL_GPIO_TogglePin(LED3_Port, LED3_Pin);
    HAL_GPIO_TogglePin(LED5_Port, LED5_Pin);
    vTaskDelay(TICKS2MS(125));
    HAL_GPIO_TogglePin(LED5_Port, LED5_Pin);
    HAL_GPIO_TogglePin(LED6_Port, LED6_Pin);
    vTaskDelay(TICKS2MS(125));
    HAL_GPIO_TogglePin(LED6_Port, LED6_Pin);
    HAL_GPIO_TogglePin(LED4_Port, LED4_Pin);
    vTaskDelay(TICKS2MS(125));
    HAL_GPIO_TogglePin(LED4_Port, LED4_Pin);
}
