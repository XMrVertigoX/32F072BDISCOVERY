#include <xXx/os/arduinotask.hpp>

using namespace xXx;

class BlinkTask : public ArduinoTask {
  public:
    BlinkTask();
    virtual ~BlinkTask();

    void setup();
    void loop();
};
