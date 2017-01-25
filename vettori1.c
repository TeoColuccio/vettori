/* vettori1.c */

/* Dichiarazione di un vettore e
 * inizializzazione dei suoi elementi mediante ciclo for
 */

#include <stdio.h>

int main()
{
  /* Un vettore di 10 variabili intere */
  int tabellina_del_tre[10];
  int i;  /* indice */

  /* inizializzazione:
   * assegna all'elemento di indice i il valore 3*i
   */
  for (i = 0; i < 10; i++) {
    tabellina_del_tre[i] = 3*i;
  }
  
  /* stampa in forma tabellare */
  printf("Indice\tValore\n");
  for (i = 0; i < 10; i++) {
    printf("%6d\t%6d\n", i, tabellina_del_tre[i]);
  }
  
  return 0;
}
