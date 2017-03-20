/* concatenazione.c */

/* Il programma concatena due stringhe usando
 * la funzione apposita inclusa in <string.h>
 */

#include <stdio.h>
#include <string.h>

int main() {
  char x[] = "Buon ";
  char y[] = "compleanno";

  printf("%s\n", strcat(x, y));

  return 0;
}
