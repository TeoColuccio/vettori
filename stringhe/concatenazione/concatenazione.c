/* concatenazione.c */

/* Il programma concatena due stringhe usando
 * la funzione apposita inclusa in <string.h>
 */

#include <stdio.h>
#include <string.h>

int main() {
  char x[1024] = "Buon ";
  char y[] = "compleanno";
  char z[1024] = "";
  
  strcat(x , y);
  strcpy(z, x);

  printf("%s\n", z);

  return 0;
}
