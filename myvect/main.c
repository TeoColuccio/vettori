#include <stdio.h>

#include "myvect.h"
#include "myvect_math.h"

int main() {
  int size = 7;
  int vett[size];
  
  myvect_init();
  myvect_init_in_range(vett, size, 2, 10);  
  myvect_print(vett, size);
  
  printf("La somma degli elementi e': %d, e la media: %f", myvect_math_sum(vett, size), myvect_math_mean(vett, size));

  myvect_print(vett, size);
  
  return 0;
}
