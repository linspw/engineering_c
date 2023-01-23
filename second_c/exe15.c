#include <stdio.h>

int main(void) {
  int n, i;
  int numero;
  int par = 0, impar = 0;
  float valor;

  printf("Digite a quantidade de números: \n");
  scanf("%d", &n);

  for(i=0; i < n; i++) {
    // printf("I: %d \n", i);
    // printf("N: %d \n", n);
    scanf("%f", &numero);
    if (numero % 2 == 0) {
      par = par + 1;
      printf("PAR");
    } else {
      impar = impar + 1;
    }
  }
  valor = (par/n) * 100;

  printf("Porcentagem de pares: %f %%", valor);
  printf("Porcentagem de impares: %f %%", 100.0 - valor);

  return 0;
}
