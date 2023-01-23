#include <stdio.h>

int main(void) {
  float angulo = 35;
  float pi = 3.141592653589793;

  float valor_em_radianos = (angulo*pi)/180;

  printf("%f\n", valor_em_radianos);
  return 0;
}
