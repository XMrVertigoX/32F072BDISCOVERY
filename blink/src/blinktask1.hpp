#include <stm32f0xx.h>

#include <xXx/os/arduinotask.hpp>

using namespace xXx;

class BlinkTask1 : public ArduinoTask {
  public:
    BlinkTask1();
    virtual ~BlinkTask1();

    void setup();
    void loop();

  private:
    GPIO_InitTypeDef _GPIO_InitStructure;
};
