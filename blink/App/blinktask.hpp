#include <xXx/os/arduinotask.hpp>
#include <xXx/templates/queue.hpp>

using namespace xXx;

class BlinkTask : public ArduinoTask {
  public:
    BlinkTask();
    ~BlinkTask();

    void loop();
    void setup();
};
