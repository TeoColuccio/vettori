/* dado.c */
 
/* Il programma lancia un dado a 6 facce 30000 volte 
 * e ne memorizza le occorrenze in un vettore.
 * Poi stampa le occorrenze e le frequenze. 
 */

#include <stdio.h>
#include "dado.h"

int main() 
{
  int i = 7, x, y, lanci;
  int somma[13] = { 0 };
  float percentuale [13] = { 0., 0., 1./36., 2./36., 3./36., 4./36., 5./36., 6./36., 5./36., 4./36., 3./36., 2./36., 1./36.};
  
  dado_init();

  for (lanci = 0;  lanci < 30000; lanci++) {

    x = dado_extract(6);
    y = dado_extract(6);

    somma[x + y]++; 
    }
  
  printf("Ho lanciato due dadi 30000 volte...\n");  
  
  for (i = 2; i < 13; i++) {
    printf("Il numero %d e' stato estratto %d volte, con percentuale reale %.2f...\n", i, somma[i], (somma[i] * 100.0) / 30000.0);
    printf("C'era una percentuale teorica pari a %.2f.\n", percentuale[i]*100);
  }

  return 0;
}
