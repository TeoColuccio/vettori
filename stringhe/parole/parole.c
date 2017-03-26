/* parole.c */

/* Il programma, data una stringa, estrae 
 * e stampa le singole parole 
 */

#include <stdio.h>
#include <string.h>

int main() {
  char string[] = "Questa e' una stringa";
  char *parole;

  parole = strtok(string, " ");
  while (parole != NULL) {
    printf("%s\n", parole);
    parole = strtok(NULL," ");
  }

  return 0;
}
