/* Lettura stringa.c */

/* Il programma, dati due numeri (uno int
 * e l'altro double), legge entrambi con 
 * sscanf() e mostra il prodotto.
 */

#include <stdio.h>

int main() {
  char stringa[] = "255 78.7";

  int x;
  double y;

  sscanf(stringa, "%d%lf", &x,&y);

  printf("Il prodotto tra i due numeri e' %.2lf", x*y);
  
  return 0;
}
