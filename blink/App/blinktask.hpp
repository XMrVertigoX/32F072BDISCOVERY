#ifndef BLINKTASK_HPP_
#define BLINKTASK_HPP_

#include <xXx/os/arduinotask.hpp>

#include "led.hpp"

#define NUM_LEDS 4

using namespace xXx;

class BlinkTask : public ArduinoTask {
  public:
    BlinkTask();
    ~BlinkTask();

    void loop();
    void setup();

  private:
    Led _leds[NUM_LEDS];
};

#endif /* BLINKTASK_HPP_ */
