#ifndef BLINKTASK_HPP_
#define BLINKTASK_HPP_

#include <xXx/os/arduinotask.hpp>

#include "led.hpp"

using namespace xXx;

class BlinkTask : public ArduinoTask {
  public:
    BlinkTask();
    ~BlinkTask();

    void loop();
    void setup();

  private:
    Led _led3(LED3_Port, LED3_Pin);
    // Led _led4(LED4_Port, LED4_Pin);
    // Led _led5(LED5_Port, LED5_Pin);
    // Led _led6(LED6_Port, LED6_Pin);
};

#endif /* BLINKTASK_HPP_ */
