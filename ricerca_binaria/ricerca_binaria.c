/* ricerca_binaria.c */

/* Illustra il metodo di ordinamento a bolle
 * e della ricerca binaria 
 */

#include <stdio.h>
#include "myvect.h"

#define SIZE 8 

void bubble_sort(int v[], const int size);
int ricerca_binaria(int x, int v[], int low, int high);

int main()
{
  int v[SIZE];
  int x = 3, ris;

  myvect_init();
  myvect_init_in_range(v, SIZE, 0, 10);
  bubble_sort(v, SIZE);
  myvect_print(v, SIZE);
  
  ris = ricerca_binaria(x, v, 0, SIZE);
  if (ris != -1) printf("L'elemento %d si trova all'indice %d del vettore.\n", x, ris);
  else printf("L'elemento non e' stato trovato.\n"); 
  
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

int ricerca_binaria(int x, int v[], int low, int high)
{
  int i, med;
  
  med = high / 2;
  if (x == v[med]) return med;
  else if (x < med) ricerca_binaria (x, v, 0, med);
  else if (x > med) ricerca_binaria (x, v, med, high);
  else return -1;
}
