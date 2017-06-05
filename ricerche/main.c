/* ricerca_binaria.c */

/* Illustra il metodo di ordinamento a bolle
 * e della ricerca binaria 
 */

#include <stdio.h>
#include "myvect.h"
#include "myvect_search.h"

#define SIZE 5 

void bubble_sort(int v[], const int size);

int main()
{
  int v[SIZE] = {7, 9, 10, 77, 87};
  int x = 7, ris;

  myvect_init();
  bubble_sort(v, SIZE);
  myvect_print(v, SIZE);
  
  ris = ricerca_binaria(x, v, SIZE);
  if (ris != -1) printf("L'elemento %d si trova all'indice %d del vettore.\n", x, ris);
  else printf("L'elemento %d non e' stato trovato.\n", x); 
  
  return 0;
}

void bubble_sort(int v[], const int size)
{
  int pass;
  int i;
  int temp, scambi = 1;

  for (pass=1; pass<size && scambi; pass++) {
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
