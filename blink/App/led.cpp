#include <stm32f0xx_hal.h>

#include "led.hpp"

Led::Led(GPIO_TypeDef *port, uint16_t pin) : _port(port), _pin(pin) {}

Led::~Led() {}

void Led::toggle() {
    HAL_GPIO_TogglePin(_port, _pin);
}
