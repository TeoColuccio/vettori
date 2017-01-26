/* dado.c */
 
/* Il programma lancia un dado a 6 facce 30000 volte 
 * e ne memorizza le occorrenze in un vettore.
 * Poi stampa le occorrenze e le frequenze. 
 */

#include <stdio.h>
#include "random.h"

int main() 
{
  int i, num, lanci = 0, conta = 1;
  int occorrenze[6] = { 0 };

  random_init();

  while (lanci < 30000) {

    num = random_extract(1, 7);
    
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

    lanci++;
  }

  printf("Ho lanciato il dato 30000 volte...\n");

  for (i = 0; i < 6; i++) {
    printf("Il numero %d e' stato estratto %d volte\n", conta, occorrenze[i]);
    conta++;
  }

  return 0;
}
