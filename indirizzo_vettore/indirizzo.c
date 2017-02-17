/* indirizzo.c */

/* L'indirizzo di un vettore */

#include <stdio.h>

#define N 10

int main()
{
  /* un vettore di N double */
  double numbers[N];

  /* Il nome di un vettore in C rappresenta
   * il suo indirizzo di memoria.
   * Inoltre l'indirizzo di un vettore coincide
   * con l'indirizzo del suo primo elemento.
   * 
   * Quindi:
   *
   * numbers (coincide con) &numbers (coincide con) &numbers[0]
   */
  printf("Indirizzo di numbers\n"
      "(numbers)     -> %p\n"
      "(&numbers)    -> %p\n"
      "(&numbers[0]) -> %p\n", numbers, &numbers, &numbers[0]);

  return 0;
}
