#include <stdio.h>

#define DIM  10

int vett1[DIM] = {1, 2, 4, 6, 7, 8, 8, 8, 8, 3};
int vett2[DIM] = {2, 4, 6, 7, 8, 8, 8, 8, 3, 1};
int vett3[DIM] = {1, 2, 4, 6, 7, 8, 8, 8, 8, 3};

void scorr();

int main() {
  int i;
  
  for(i=0;i <10; i++) {
    printf("%d", vett1[i]);
  }

  printf("\n");

  for(i=0;i <10; i++) {
    printf("%d", vett2[i]);
  }
  printf("\n");

  scorr();
  
  return 0;
}

void scorr() {
  int count = 0, i = 0, temp, c = 0, t = 0;

  while (t < 10) {
    if (vett1[c] != vett2[c]) {
      temp = vett2[DIM - 1];
      while (i < DIM) {
        vett2[DIM - i - 1] = vett2[DIM - i - 2]; 
        i++;
      }
      vett2[0] = temp;
      count++;
    }
    c++;
    t++;
  }

  for(i=0;i <10; i++) {
    printf("%d", vett1[i]);
  }
  
  printf("\n");

  for(i=0;i <10; i++) {
    printf("%d", vett2[i]);
  }
  printf("\n%d\n",count);
}
