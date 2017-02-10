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
  int dado_x[6] = { 0 };
  int dado_y[6] = { 0 };

  dado_init();

  for (lanci = 0;  lanci < 30000; lanci++) {

    num = dado_extract(6);
    dado_x[num - 1]++;
  }
  
  for (lanci = 0;  lanci < 30000; lanci++) {

    num = dado_extract(6);
    dado_y[num - 1]++;
  }
 
  printf("Ho lanciato il dado 30000 volte...\n");
  printf("Ho lanciato il secondo dado 30000 volte...\n");
  
  printf("***Primo dado***\n");
  for (i = 0; i < 6; i++) {
    printf("Il numero %d e' stato estratto %d volte\n", i+1, dado_x[i]);
  }
  printf("***Secondo dado***\n");
  for (i = 0; i < 6; i++) {
    printf("Il numero %d e' stato estratto %d volte\n", i+1, dado_y[i]);
  }

  return 0;
}
