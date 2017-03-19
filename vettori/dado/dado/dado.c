#include "dado.h"
#include "random.h"

void dado_init() {
  random_init();
}

int dado_extract(int facce) {
  return random_extract(1, facce + 1);
}
