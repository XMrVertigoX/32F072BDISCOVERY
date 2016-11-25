#ifndef LED_HPP_
#define LED_HPP_

#include <stm32f0xx_hal.h>

#define LED3_Pin GPIO_PIN_6
#define LED3_Port GPIOC
#define LED4_Pin GPIO_PIN_8
#define LED4_Port GPIOC
#define LED5_Pin GPIO_PIN_9
#define LED5_Port GPIOC
#define LED6_Pin GPIO_PIN_7
#define LED6_Port GPIOC

class Led {
  public:
    Led(GPIO_TypeDef *port, uint16_t pin);
    ~Led();

    void toggle();

  private:
    GPIO_TypeDef *_port;
    uint16_t _pin;
};

#endif /* LED_HPP_ */
