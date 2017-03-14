/* maiuscolo_ minuscolo.c */ 
 
/* Il programma, data una stringa, se non contiene numeri
 * stampa tutto in maiuscolo, altrimenti stampa 
 * tutto in minuscolo (mantenendo i numeri)
 */

#include <stdio.h>
#include <ctype.h>

int main() {
  char stringa[50];
  int i = 0, stato;

  printf("Inserisci una stringa: ");
  scanf("%s", stringa);

  while ( stringa[i] ) {
    if (isdigit(stringa[i]) == 0) {
      stato = 0;
      i++;
    }
    else {
      stato = 1;
      break;
    }
  }

  i = 0; 
  while (stringa[i]) {
    if (stato == 0) 
      putchar(toupper(stringa[i]));
    else
      putchar(tolower(stringa[i]));
    i++;
  }

  putchar('\n');
  
  return 0;
}
