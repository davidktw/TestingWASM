#include <emscripten.h>
#include <stdio.h>
#include <string.h>

void EMSCRIPTEN_KEEPALIVE sayhello(char *output, int maxlen, char *name) {
  snprintf(output, maxlen, "Hello to %s", name);
}
