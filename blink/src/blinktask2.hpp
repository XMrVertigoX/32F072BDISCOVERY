#include <stm32f0xx.h>

#include <xXx/os/arduinotask.hpp>

using namespace xXx;

class BlinkTask2 : public ArduinoTask {
  public:
    BlinkTask2();
    virtual ~BlinkTask2();

    void setup();
    void loop();

  private:
    GPIO_InitTypeDef _GPIO_InitStructure;
};
