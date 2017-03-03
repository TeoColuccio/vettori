#include "myvect_math.h"

int myvect_math_sum(int vett[], int size) 
{
  int i, sum = 0; 
  for (i = 0; i < size; i++) {
    sum += vett[i];
  }
  return sum;
}

/* in questa funzione c'e' un errore */
double myvect_math_mean(int vett[], int size) 
{
  return (double)myvect_math_sum(vett, size) / (double)size;
}
