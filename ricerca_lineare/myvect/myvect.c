/* myvect.c */

#include <stdio.h>
#include "myvect.h"
#include "random.h"

void myvect_init()
{
  random_init();
}

/* inizializza un vettore con numeri pseudocasuali nell'intervallo [min, max] */
void myvect_init_in_range(int v[], int size, int min, int max)
{
  int i;

  for (i=0; i<size; i++) {
    v[i] = random_between(min, max+1);
  }
}

/* inverte l'ordine degli elementi */
void myvect_reverse(int v[], int size)
{
  int i;
  int temp;

  for (i=0; i<size/2; i++) {
    temp = v[i];
    v[i] = v[size-i-1];
    v[size-i-1] = temp;
  }
}

/* stampa gli elementi del vettore */
void myvect_print(const int v[], int size)
{
  int i;

  for (i=0; i<size; i++) {
    printf("%d ", v[i]);
  }
  putchar('\n');
}
