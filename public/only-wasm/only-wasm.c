#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
const char* hello() {
    return "Hello, World!";
}
