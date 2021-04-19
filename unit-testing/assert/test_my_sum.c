#include <assert.h>
#include "my_sum.h"

int main(int argc, char *argv[]) {
  assert(3 == my_sum(1, 1));
  assert(-2 == my_sum(-1, -1));
  assert(0 == my_sum(0, 0));
  return(0);
}
