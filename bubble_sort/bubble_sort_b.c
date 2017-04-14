/* bubble_sort.c */

/* Illustra il metodo di ordinamento a bolle */

#include <stdio.h>
#include "myvect.h"

#define SIZE 4 

void bubble_sort(int v[], const int size);

int main()
{
  int v[SIZE] = {1, 2, 3, 4};
  

  myvect_init();

  myvect_init_in_range(v, SIZE, -20, 100); 

  printf("prima dell'ordinamento:\n");
  myvect_print(v, SIZE);

  bubble_sort(v, SIZE);

  printf("Vettore dopo l'ordinamento:\n");
  myvect_print(v, SIZE);

  return 0;
}

void bubble_sort(int v[], const int size)
{
  int pass;
  int i;
  int temp, scambi = 1;

  for (pass=1; pass<size && scambi; pass++) {
    /* per ogni passaggio fatto sul vettore
     * controlla se l'elemento i-esimo e'
     * maggiore dell'elemento (i+1)-esimo
     * e in tal caso li scambia
     */
    scambi = 0;
    for (i=0; i<size-pass; i++) {
      if (v[i] > v[i+1]) {
        temp = v[i];
        v[i] = v[i+1];
        v[i+1] = temp;
        scambi = 1;
      }
    }
  }
}
