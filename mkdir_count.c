#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
  printf(1, "Total number of mkdir calls: %d\n", mkdir_count());
  exit();
}

