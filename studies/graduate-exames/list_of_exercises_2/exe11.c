#include <stdio.h>

void main(void) {
  float primeira_prova = 4;
  float primeiro_trabalho = 2;
  float segunda_prova = 1;
  float segunda_trabalho = 2;
  float total;

  total = ((primeira_prova + primeiro_trabalho) + (segunda_prova + segunda_trabalho)) /2;

  if (total >= 5) {
    printf("Aprovado com nota: %.2f\n", total);
  } else {
    printf("Reprovado com nota: %.2f\n", total);
  }

  return;
}
