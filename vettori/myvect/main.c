#include <stdio.h>

#include "myvect.h"
#include "myvect_math.h"

int main() {
  int size_a = 7;
  int size_b = 7;
  int vett_a[size_a];
  int vett_b[size_b];
  
  myvect_init();

  myvect_init_in_range(vett_a, size_a, 2, 10);  
  myvect_init_in_range(vett_b, size_b, 2, 10);  
  myvect_print(vett_a, size_a);
  printf("\n\n");
  myvect_print(vett_b, size_b);
  
  if (size_a != size_b) 
    printf("I vettori non hanno la stessa dimensione e quindi non posso calcolare il prodotto scalare\n");
  else
    printf("Il prodotto scalare e' pari a: %d\n", myvect_math_dot_product(vett_a, vett_b, size_a));

  return 0;
}
