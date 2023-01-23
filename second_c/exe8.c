#include <stdio.h>

void main(void) {
  float area_circulo;
  float pi = 3.14;
  float raio;

  printf("Digite o raio do circulo.\n");

  scanf("%f", &raio);

  area_circulo = pi * (raio * raio);

  printf("Area: %f", area_circulo);
  return;
}
