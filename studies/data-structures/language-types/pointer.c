#include <stdio.h>
#include <math.h>
#include <string.h>


int main(void) {
  int value = 27;
  
  //declaração de variável ponteiro
  int *ptr;
  
  ptr = &value;
  
  printf("Utilizando ponteiros\n\n");
  
  printf ("Conteudo da variavel valor: %d\n", value);
  printf ("Endereço da variavel valor: %x \n", &value);
  printf ("Conteudo da variavel ponteiro ptr (endereco): %x \n", ptr);
  printf ("Conteudo da variavel ponteiro ptr (valor): %d \n", *ptr);
  printf ("\n\n");
  return 0;
}
