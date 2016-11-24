#include <FreeRTOS.h>
#include <queue.h>

#include <xXx/os/arduinotask.hpp>
#include <xXx/templates/queue.hpp>

using namespace xXx;

class BlinkTask : public ArduinoTask {
  public:
    BlinkTask(Queue<int> &queue);
    virtual ~BlinkTask();

    void setup();
    void loop();

  private:
    Queue<int> &_queue;
};
