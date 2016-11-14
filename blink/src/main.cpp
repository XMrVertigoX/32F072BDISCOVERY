#include <stm32f0xx.h>
#include <stm32f0xx_conf.h>

#include <FreeRTOS.h>
#include <task.h>

#include <blinktask1.hpp>
#include <blinktask2.hpp>

int main() {
    static BlinkTask1 blinkTask1;
    static BlinkTask2 blinkTask2;

    vTaskStartScheduler();
}
