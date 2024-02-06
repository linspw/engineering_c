/* **********************************************************************************
* Faculdade de Engenharias Arquitetura e Urbanismo (FEAU) (Univap)
* Curso: Engenharia da Computação - Data de Entrega: DD/MM/2022
* Autores: XXXXXXXXXXXXXXXXXXXXXXXXX
* YYYYYYYYYYYYYYYYYYYYYYYYY
*
* Turma: 5UNA Disciplina: Programação - I
* Avaliação parcial referente ao 2 - Bimestre
* Observação: <colocar se houver>
*
* nome_arquivo.cpp ou nome_arquivo.c
* **********************************************************************************
*/

#include <stdio.h>
// #include <conio.h>
#include <math.h>
#include <string.h>


int main(void) {
  // float total = 10;

  // float *referente = &total;

  // printf("Valor: '%f', Referencia: '%f' \n\n", total, &referente);

  int valor = 27;
  
  //declaração de variável ponteiro
  int *ptr;
  
  //atribuindo o endereço da variável valor ao ponteiro
  ptr = &valor;
  
  printf("Utilizando ponteiros\n\n");
  
  printf ("Conteudo da variavel valor: %d\n", valor);
  printf ("Endereço da variavel valor: %x \n", &valor);
  printf ("Conteudo da variavel ponteiro ptr (endereco): %x \n", ptr);
  printf ("Conteudo da variavel ponteiro ptr (valor): %d \n", *ptr);
  printf ("\n\n");
  return 0;
}
