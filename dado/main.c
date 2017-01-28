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
    
    switch (num) {
      case 1:
      occorrenze[0]++;
      break;
      case 2:
      occorrenze[1]++;
      break;
      case 3:
      occorrenze[2]++;
      break;
      case 4:
      occorrenze[3]++;
      break;
      case 5:
      occorrenze[4]++;
      break;
      case 6:
      occorrenze[5]++;
      break;
    }
  }

  printf("Ho lanciato il dato 30000 volte...\n");

  for (i = 0; i < 6; i++) {
    printf("Il numero %d e' stato estratto %d volte\n", conta, occorrenze[i]);
    conta++;
  }

  return 0;
}
