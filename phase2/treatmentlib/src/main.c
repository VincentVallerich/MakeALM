#include "../include/header/cpstd.h"
#include "../include/header/add.h"

int main(int argc, char const *argv[])
{
    if (argc <= 2) printf("Usage : command argument(s)");
    if (strcmp(argv[1], "cpstd") == 0) cp_file(argc, argv[2], argv[3]);
    if (strcmp(argv[1], "append") == 0) append_to_file(argc, argv[2], argv[3]);
    return 0;
}
