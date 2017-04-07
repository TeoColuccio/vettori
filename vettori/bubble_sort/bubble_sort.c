/* Il programma ordina un vettore di interi 
 * in modo ascendente
 */

#include <stdio.h>

#include "myvect.h"

int main() {
  const int size = 10;
  int vett[size];
  int i, temp = 0; 

  myvect_init();

  myvect_init_in_range(vett, size, 0, 10);

  myvect_print(vett, size);
  
  for (pass = 1; pass < size; pass++) {
    for (i = 0; i < size-1; i++) {
      if (vett[i] > vett[i+1]) {
        temp = vett[i+1];
        vett[i+1] = vett[i];
        vett[i] = temp;
      }
    }
  }

  myvect_print(vett, size);

  return 0;
}
