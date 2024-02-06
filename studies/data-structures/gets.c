#include <stdio.h>

int main() {
    char nome[128];

    puts("Digite o seu nome: ");
    gets(nome); // inseguro. veja o aviso acima.
    printf("Seu nome é %s.\n", nome);

    return 0;
}
