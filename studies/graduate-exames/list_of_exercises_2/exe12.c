#include <stdio.h>

void main(void) {
  float primeira_prova = 10;
  float segunda_prova = 10;
  float terceira_prova = 10;
  float total;

  total = ((primeira_prova * 2) + (segunda_prova * 4) + (terceira_prova * 6))/12;

  printf("%.2f\n", total);

  return;
}
