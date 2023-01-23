#include <stdio.h>

void main(void) {
  float lado1;
  float lado2;

  printf("Digite os l1 e l2 do quadrado ou retangulo.\n");

  scanf("%f", &lado1);
  scanf("%f", &lado2);

  printf("Area: %.2f\n", lado1 * lado2);

  printf("Perimetro: %.2f\n", (lado1 * 2) + (lado2 * 2));

  if (lado1 != lado2) {
    printf("Retangulo\n");
  } else {
    printf("Quadrado\n");
  }

  return;
}
