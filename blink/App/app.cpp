#include <xXx/templates/queue.hpp>

#include "app.h"
#include "blinktask.hpp"

using namespace xXx;

extern "C" void App_createStatic(void) {
    // Shared objects
    static Queue<int> queue(10);

    // Tasks
    static BlinkTask blinkTask(queue);
}
