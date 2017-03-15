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
  
  printf("La stringa convertita in intero e': %d\n", atoi(stringa));
  printf("La stringa convertita in double e': %lf\n", (float)atoi(stringa));
  printf("La stringa stampata normalmente e': %s\n", stringa);

  return 0;
}
