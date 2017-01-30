/* dado.c */
 
/* Il programma lancia un dado a 6 facce 30000 volte 
 * e ne memorizza le occorrenze in un vettore.
 * Poi stampa le occorrenze e le frequenze. 
 */

#include <stdio.h>
#include "dado.h"

int main() 
{
  int i, num, lanci;
  int occorrenze[6] = { 0 };

  dado_init();

  for (lanci = 0;  lanci < 30000; lanci++) {

    num = dado_extract(6);
    occorrenze[num - 1]++;
  }
 
  printf("Ho lanciato il dato 30000 volte...\n");

  for (i = 0; i < 6; i++) {
    printf("Il numero %d e' stato estratto %d volte\n", conta, occorrenze[i]);
    conta++;
  }

  return 0;
}
