#ifndef CPSTD_H
#define CPSTD_H
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

#include "debug.h"

void usage(int argc, const char *argv[]);
void cp_file(int argc, const char *src, const char *dest);

#endif