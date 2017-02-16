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
  float percentuale;
  
  dado_init();

  for (lanci = 0;  lanci < 30000; lanci++) {

    x = dado_extract(6);
    y = dado_extract(6);

    somma[x + y]++; 
    
  }
  
  printf("Ho lanciato due dadi 30000 volte...\n");
  
  for (percentuale = 2; percentuale < 7; percentuale++) {
    printf("La percentuale teorica che esca %.0f e' %.2f\n", percentuale, (percentuale-1)*100 / 36); 
  }
  for (percentuale = 6; percentuale > 0; percentuale--){
      printf("La percentuale teorica che esca %d e' %.2f\n", i, (percentuale*100) / 36); 
    i++;
  }
  
  for (i = 2; i < 13; i++) {
    printf("Il numero %d e' stato estratto %d volte, con percentuale reale %.2f\n", i, somma[i], (somma[i] * 100.0) / 30000.0);
  }

  
  return 0;
}
