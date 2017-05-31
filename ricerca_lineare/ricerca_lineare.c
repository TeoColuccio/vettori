/* ricerca_lineare.c */

/* Illustra il metodo di ordinamento a bolle
 * e della ricerca lineare 
 */

#include <stdio.h>
#include "myvect.h"

#define SIZE 8 

void bubble_sort(int v[], const int size);
int ricerca_lineare(int x, int v[], const int size);

int main()
{
  int v[SIZE];
  int x = 2, ris;

  myvect_init();
  myvect_init_in_range(v, SIZE, 0, 10);
  myvect_print(v, SIZE);

  ris = ricerca_lineare(x, v, SIZE);
  if (ris != -1)
  printf("L'elemento %d si trova all'indice %d del vettore.\n", x, ris);
  else printf("L'elemento non appartiene al vettore.\n");

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

int ricerca_lineare(int x, int v[], const int size)
{
  int i;

  for (i = 0; i < size; i++) {
    if (x == v[i]) return i;
  }
  return -1;
}



