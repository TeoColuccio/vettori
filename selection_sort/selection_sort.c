/* Il programma ordinera' gli elementi interi di
 * un vettore con una funzione selection_sort() 
 */


#include <stdio.h>
#include "myvect.h"

#define SIZE 4

void selection_sort(int v[], const int size, int lim);

int main()
{
  int v[SIZE];

  myvect_init();

  myvect_init_in_range(v, SIZE, 0, 100);

  printf("Vettore prima dell'ordinamento:\n");
  myvect_print(v, SIZE);

  selection_sort(v, SIZE, 0);

  printf("Vettore dopo l'ordinamento:\n");
  myvect_print(v, SIZE);

  return 0;
}

void selection_sort(int v[], const int size, int min)
{
  int i;
  int temp;

  for (i=0; i<size; i++) {
    if (v[i] < min) min = v[i];
  }
}
