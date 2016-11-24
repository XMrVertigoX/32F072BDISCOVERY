#include <xXx/os/arduinotask.hpp>
#include <xXx/templates/queue.hpp>

using namespace xXx;

class BlinkTask : public ArduinoTask {
  public:
    BlinkTask(Queue<int> &queue);
    ~BlinkTask();

    void loop();
    void setup();

  private:
    Queue<int> &_queue;
};
