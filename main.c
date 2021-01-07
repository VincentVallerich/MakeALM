#include "cpstd.h"

int main(int argc, char const *argv[])
{
    if (argc <= 2) printf("Usage : command argument(s)\n");
    if (argv[1] == "cpstd") printf("salut");
    cp_file(argc, argv[2], argv[3]);
    return 0;
}
