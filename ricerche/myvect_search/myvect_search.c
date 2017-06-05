/* myvect_search.c */

#include <stdio.h>
#include "myvect_search.h"

int ricerca_binaria_helper(int x, int v[], int low, int high);

int ricerca_lineare(int x, int v[], const int size)
{
  int i;

  for (i = 0; i < size; i++) {
    if (x == v[i]) return i;
  }
  return -1;
}

int ricerca_binaria(int x, int v[], int size)
{
  return ricerca_binaria_helper(x, v, 0, size);
}

int ricerca_binaria_helper(int x, int v[], int low, int high)
{
  int i, med;
  
  printf("Low: %d, High: %d\n", low, high);
  if (low > high) return -1;

  med = (low+high)/ 2;
  if (x == v[med]) return med;
  else if (x < v[med]) ricerca_binaria_helper(x, v, low, med-1);
  else if (x > v[med]) ricerca_binaria_helper(x, v, med+1, high);
}
