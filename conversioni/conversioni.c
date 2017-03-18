/* conversioni.c */

/* Il programma prende tre caratteri cifra inseriti
 * dall'utente in una stringa e li converte in un intero, 
 * poi fa il cast a double ed infine li trasforma in una stringa 
 * da stampare 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  char stringa[] = "88727";

  int strtoint = atoi(stringa);
  double strtofloat = (double)strtoint;
  

  printf("La stringa convertita in intero e': %d\n", strtoint);
  printf("La stringa convertita in double e': %f\n", strtofloat);
  sprintf(stringa, "%.2f", strtofloat); 
  printf("La stringa riconvertita dal double e': %s\n", stringa);

  return 0;
}
