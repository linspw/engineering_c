#include <stdio.h>

int main(void) {
  int M = 0;
  int C = 0;
  int N;

  printf("Começou\n");
  do {
    scanf("%d", &N);

    if (N > M) {
      M = N;
    }
    C = C + 1;
  } while (C < 5);

  printf("Resultado: %d\n", M);
  return 0;
}
