/* dado.c */
 
/* Il programma lancia un dado a 6 facce 30000 volte 
 * e ne memorizza le occorrenze in un vettore.
 * Poi stampa le occorrenze e le frequenze. 
 */

#include <stdio.h>
#include "dado.h"

int main() 
{
  int i = 0, x, y, lanci;
  int somma[13] = { 0 };
  
  dado_init();

  for (lanci = 0;  lanci < 30000; lanci++) {

    x = dado_extract(6);
    y = dado_extract(6);

    somma[x + y]++; 
    
  }
  
  printf("Ho lanciato due dadi 30000 volte...\n");
  
  for (i = 2; i < 13; i++) {
    printf("Il numero %d e' stato estratto %d volte, con percentuale reale %.2f\n", i, somma[i], (somma[i] * 100.0) / 30000.0);
  }

  return 0;
}
