#include <stdio.h>

#define pi 3.14

int main(void) {
  int r;
  
  printf("Podaj promień: ");
  scanf("%d", &r);

  if(r<0) {
    printf("Nieprawidłowe dane");
  } else {
    double pole = pi*r*r;
    printf("Pole jest równe: %f", pole);
  }
  
  return 0;
}