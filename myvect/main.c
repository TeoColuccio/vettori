#include <stdio.h>

#include "myvect.h"

int main() {
  int size = 7;
  int vett[size];
  
  myvect_init_in_range(vett, size, 2, 10);  
  myvect_print(vett, size);
  
  printf("Ribalto il vettore...\n");
  myvect_reverse(vett, size);

  myvect_print(vett, size);
  
  return 0;
}
