#include <stdio.h>

#include "myvect.h"
#include "random.h"

void myvect_init() {
  random_init();
}

void myvect_init_in_range(int vett[], int size, int min, int max) {
  int i;
  
  random_init();

  for (i = 0; i < size; i++) {
    vett[i] = random_extract(min, max);
  }
}

void myvect_print(int vett[], int size) {
  int i; 

  for (i = 0; i < size; i++) {
    printf("%d\n", vett[i]);
  }
}

void myvect_reverse(int vett[], int size) {
  int i, tempo;

  for (i = 0; i < size / 2; i++) {
    tempo = vett[i];
    vett[i] = vett[size-1-i];
    vett[size-1-i] = tempo;
  }
}
