#include "app.h"
#include "blinktask.hpp"

extern "C" void App_createStatic(void) {
    static BlinkTask blinkTask;
}
