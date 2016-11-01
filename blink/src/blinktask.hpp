#include <stm32f0xx.h>

#include <xXx/os/arduinotask.hpp>

using namespace xXx;

class BlinkTask : public ArduinoTask {
  public:
    BlinkTask(GPIO_InitTypeDef &GPIO_InitStructure);
    virtual ~BlinkTask();

    void setup();
    void loop();

  private:
    GPIO_InitTypeDef &_GPIO_InitStructure;
};
