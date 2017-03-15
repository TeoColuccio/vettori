/* main.c */

/* Data una stringa
    se non contiene numeri stampare tutto in maiuscolo
    altrimenti stampare tutto in minuscolo (mantenere i numeri)
*/

#include <stdio.h>
#include <ctype.h>

int has_digits(char str[]);
void print_lower(char str[]);
void print_upper(char str[]);

int main()
{
  /*char str[] = "abcDEF123qwerty";*/
  char str[] = "abcDEFqwerty";

  if (has_digits(str)) {
    print_upper(str);
  } else {
    print_lower(str);
  }

  return 0;
}

int has_digits(char str[])
{
  int i = 0;

  while (str[i]!='\0') {
    if (isdigit(str[i]))  return 1;
    i++;
  }

  return 0;
}

void print_lower(char str[])
{
  int i = 0;
  while (str[i]!='\0') {
    putchar(tolower(str[i]));
    i++;
  }
}

void print_upper(char str[])
{
  int i = 0;
  while (str[i]!='\0') {
    putchar(toupper(str[i]));
    i++;
  }
}
