#include "myvect_math.h"

int myvect_math_sum(int vett[], int size) 
{
  int i, sum = 0; 
  for (i = 0; i < size; i++) {
    sum += vett[i];
  }
  return sum;
}

double myvect_math_mean(int vett[], int size) 
{
  return (double)myvect_math_sum(vett, size) / (double)size;
}

int myvect_math_dot_product(int vett_x[], int size_a, int vett_y[], int size_b)
{
  int i, prod = 0;

  if (size_a != size_b) 
    printf("I vettori hanno dimensione diversa!! Quindi non posso calcolare il prodotto scalare\n");
  else {
    for (i = 0; i < size_a; i++) {
      prod += vett_x[i] * vett_y[i];
    }
  }
  return prod;
}
