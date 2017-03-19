/* vettori2.c */

/* Inizializzazione di un vettore al momento
 * della dichiarazione
 */

#include <stdio.h>

int main()
{
  /* inizializzazione di tutti gli elementi */
  int ten_numbers[10] = { 4, 8, 17, 98, 2, 1, 67, 18, 21, 5 };

  /* inizializzazione solo del primo elemento
   * in forma esplicita, gli altri implicitamente
   * verranno posti pari a zero.
   * Nota: almeno il primo elemento del vettore
   * deve essere inizializzato affinche' gli altri
   * possano essere azzerati!
   */
  int five_numbers[5] = { 0 };

  /* inizializzazione solo del primo
   * elemento con un numero diverso
   * da zero. Tutti gli altri verranno
   * comunque posti pari a zero.
   */
  int six_numbers[6] = { 7 };

  /* dichiarazione con inizializzazione
   * di tutti gli elementi, omettendo
   * la dimensione
   */
  int four_numbers[/* dimensione omessa, conta il compilatore */] = { 1, 2, 3, 4 };

  /* indice */
  int i;  

  /* stampa in forma tabellare */
  printf("Indice\tValore (Ten Numbers)\n");
  for (i=0; i<10; i++) {
    printf("%6d\t%6d\n", i, ten_numbers[i]);
  }
  printf("Indice\tValore (Five Numbers)\n");
  for (i=0; i<5; i++) {
    printf("%6d\t%6d\n", i, five_numbers[i]);
  }
  printf("Indice\tValore (Six Numbers)\n");
  for (i=0; i<6; i++) {
    printf("%6d\t%6d\n", i, six_numbers[i]);
  }
  printf("Indice\tValore (Four Numbers)\n");
  for (i=0; i<4; i++) {
    printf("%6d\t%6d\n", i, four_numbers[i]);
  }
  
  return 0;
}
