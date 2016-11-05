#include <stm32f0xx.h>
#include <stm32f0xx_conf.h>

#include <FreeRTOS.h>
#include <task.h>

#include "blinktask.hpp"

int main() {
    static BlinkTask blinkTask;

    vTaskStartScheduler();
}
