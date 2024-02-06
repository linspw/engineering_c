#include <stdio.h>

int main() {
    char name[128]; // String

    puts("Write your name: ");
    gets(name); // inseguro. veja o aviso acima. USE fgets
    printf("Your name is %s.\n", name);

    return 0;
}
