#include <xXx/templates/queue.hpp>

#include "app.h"
#include "blinktask.hpp"

using namespace xXx;

extern "C" void App_createStatic(void) {
    static BlinkTask blinkTask;
}
