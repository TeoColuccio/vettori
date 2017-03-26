/* concatenazione.c */

/* Il programma concatena due stringhe usando
 * la funzione apposita inclusa in <string.h>
 */

#include <stdio.h>
#include <string.h>

int main() {
  char x[] = "Buon ";
  char y[] = "compleanno";
  char z[1024] = "";
  
  sprintf(z, "%s", strcat(x, y));

  printf("%s\n", z);

  return 0;
}
