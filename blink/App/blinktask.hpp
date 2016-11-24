#include <xXx/os/arduinotask.hpp>

using namespace xXx;

class BlinkTask : public ArduinoTask {
  public:
    BlinkTask();
    ~BlinkTask();

    void loop();
    void setup();
};
