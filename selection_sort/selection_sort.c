/* Il programma ordinera' gli elementi interi di
 * un vettore con una funzione selection_sort() 
 */


#include <stdio.h>
#include "myvect.h"

#define SIZE 4

int selection_sort(int v[], int size);

int main()
{
  int v[SIZE];

  myvect_init();

  myvect_init_in_range(v, SIZE, 0, 100);

  printf("Vettore prima dell'ordinamento:\n");
  myvect_print(v, SIZE);

  printf("il minimo e': %d\n", selection_sort(v, SIZE));

  printf("Vettore dopo l'ordinamento:\n");
  myvect_print(v, SIZE);

  return 0;
}

int selection_sort(int v[], int size)
{
  int i, temp, min, index_min;

  min = v[0];
  for (i=1; i<size; i++) {
    if (v[i] < min) {
      min = v[i];
      index_min = i;
    }
  }
  temp = v[0];
  v[0] = v[index_min];
  v[index_min] = temp;
  
  return min;
}
