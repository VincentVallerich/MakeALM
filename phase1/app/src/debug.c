#include "../header/debug.h"

void exit_error(const char *fmt, ...) {
    printf("%s", fmt);
    exit(3);
}