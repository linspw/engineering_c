#include <stdio.h>

int main() {
    int achou = 0;
    char nome[128] = "Lins";
    char cadastro[128] = "Cadastro de Jessé Correia Lins";

    // puts("Digite o seu nome: ");
    // gets(nome); // inseguro. veja o aviso acima.

    for(int x = 0; x < strlen(cadastro); x++) {
      printf("%c", cadastro[x]);
    }
    // printf("Seu nome é %s.\n", nome);

    printf("\n\n");
    return 0;
}
