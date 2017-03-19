/* vettori.c */

/* Passaggio di vettori a funzioni */

#include <stdio.h>

#define N 20

/* Quando si crea una funzione a cui passare un vettore
 * bisogna indicare anche di quanti elementi e' composto
 */
void inizializza_vettore(int vett[], int size);
void stampa_vettore(const int vett[], int size);

int main()
{
  int v[N];
  
  /* passa l'indirizzo del vettore alla funzione */
  inizializza_vettore(v, N);

  /* anche in questo caso viene passato
   * l'indirizzo, ma la funzione dichiara
   * che non modifichera' il vettore (const)
   */
  stampa_vettore(v, N);
  
  return 0;
}

void inizializza_vettore(int vett[], int size)
{
  int i;
  
  for (i=0; i<size; i++) {
    vett[i] = 2*i+5;
  }
}

void stampa_vettore(const int vett[], int size)
{
  int i;
  
  printf("Indice\tValore\n");
  for (i=0; i<size; i++) {
    printf("%6d\t%6d\n", i, vett[i]);
  }
}
