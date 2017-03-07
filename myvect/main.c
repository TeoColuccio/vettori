#include <stdio.h>

#include "myvect.h"
#include "myvect_math.h"

int main() {
  int size = 7;
  int vett_a[size];
  int vett_b[size];
  
  myvect_init();

  myvect_init_in_range(vett_a, size, 2, 10);  
  myvect_init_in_range(vett_b, size, 2, 10);  
  myvect_print(vett_a, size);
  printf("\n\n");
  myvect_print(vett_b, size);
  
  myvect_math_dot_product(vett_a, 8, vett_b, size);

  return 0;
}
