#include <xXx/templates/queue.hpp>

#include "app.h"
#include "blinktask.hpp"

#define USER_BUTTON_PIN GPIO_PIN_0
#define USER_BUTTON_PORT GPIOA

using namespace xXx;

extern "C" void App_createStatic(void) {
    // Shared objects
    static Queue<int> queue(10);

    // Tasks
    static BlinkTask blinkTask(queue);
}
