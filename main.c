#include "cpstd.h"
#include "add.h"

int main(int argc, char const *argv[])
{
    if (argc <= 2) printf("Usage : command argument(s)");
    if (argv[0] == "cpstd") cp_file(argc, argv);
    if (argv[0] == "append") append_to_file(argc, argv);
    return 0;
}
