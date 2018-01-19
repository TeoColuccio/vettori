#include <stdio.h>

#define DIM  10

int vett1[DIM] = {1, 2, 4, 6, 7, 8, 8, 8, 8, 3};
int vett2[DIM] = {4, 6, 7, 8, 8, 8, 8, 3, 1, 2};
int vett3[DIM] = {1, 2, 4, 6, 7, 8, 8, 8, 8, 3};

void scorr();

int main() {
  int i;
  
  for(i=0;i <10; i++) { // stampa vett1 iniziale
    printf("%d", vett1[i]);
  }

  printf("\n");

  for(i=0;i <10; i++) { // stampa vett2 iniziale
    printf("%d", vett2[i]);
  }
  printf("\n");

  scorr(); // chiamo la funzione
  
  return 0;
}

void scorr() {
  int count = 0, i = 0, temp, c = 0, t = 0;

  while (t < 10) { // potranno essere compiuti al massimo 10 scorrimenti
    while (vett1[c] != vett2[c]) { //controllo gli indici iniziali
      temp = vett2[DIM - 1]; // inizio lo scorrimento circolare
      while (i < DIM) {
        vett2[DIM - i - 1] = vett2[DIM - i - 2]; 
        i++;
      }
      vett2[0] = temp;
      count++; // aggiorno gli scorrimenti
      c++; // controllo l'indice successivo
      i++; // aggiorno "i" per il prossimo scorrimento 
    }
    t++; // aggiorno la variabile per il while iniziale
  }

  for(i=0;i <10; i++) { // stampo vett1 finale
    printf("%d", vett1[i]);
  } 
  
  printf("\n");

  for(i=0;i <10; i++) { //stampo vett2 finale
    printf("%d", vett2[i]);
  } 
  printf("\nScorrimenti: %d\n",count); // stampo il numero degli scorrimenti
}
