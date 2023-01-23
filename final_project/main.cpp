/* **********************************************************************************
* Faculdade de Engenharias Arquitetura e Urbanismo (FEAU) (Univap)
* Curso: Engenharia da Computação - Data de Entrega: 20/06/2022
* Autores: Jessé Correia Lins
* João Luiz Franca Silva
*
* Turma: 5UNA Disciplina: Programação - I
* Avaliação parcial referente ao 2 - Bimestre
* Observação: <colocar se houver>
*
* main.c
* **********************************************************************************
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

// Algoritmo do método do trapézio
float r(float t) {
  return 300 * exp(0.3*t);
}
 // Implementar a função
float trapezio (int a, int b) {
  float xn = b;
  float x0 = a;
  float n = 500;
  float h = (xn - x0) / n;
  float x = x0 + h;
  float soma = 0;

  for (int i = 1; i <= n; i++) {
    soma = soma + r(x);
    x = x + h;
  }

  float p = h * (((r(x0) + r(xn)) / 2) + soma);
  return p;
}

struct Dados {
  char nome[45]; // nome do pesquisador
  int periodo; // Número do teste populacional realizado, entrada desordenada
  int a; // Primeiro valor do intervalo limite inferior a ≥ 2
  int b; // Segundo valor do intervalo limite superior b ≤ 20
  float r; // taxa de variação da população
};

char * getExtenso(int periodo) {
  char * unidades[20]  = { "zero", "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove", "vinte" };

  return unidades[periodo];
}

void imprime(struct Dados dados) {
  char * number = getExtenso(dados.periodo);
  printf("%-10s %-30s [%d,%d] %20.2f\n", number, dados.nome, dados.a, dados.b, dados.r + 1200);
}

void imprimeCabecalho() {
  printf("\n\n");
  char periodo[20];
  char nome[45];
  char intervalo[20];
  char valorPop[20];

  strcpy(periodo, "Periodo");
  strcpy(nome, "Nome pesquisador");
  strcpy(intervalo, "Intervalo [a,b]");
  strcpy(valorPop, "Valor Populacional");
  printf("%-10s %-30s %s %s\n", periodo, nome, intervalo, valorPop);
}

int main(void) {
  int total = 0;

  printf("Digite a quantidade de pesquisadores:\n");
  scanf("%d", &total);
  struct Dados listaPesquisadores[total]; 
  struct Dados pesquisador, pesquisadorMaiorValorPop, pesquisadorMenorValorPop;
  int maiorPeriodo = 0;
  int menorPeriodo = 0;
  int numPeriodosMaiorQue1500 = 0;
  printf("\n\n");

  for(int i = 0; i < total; i++) {
    printf("Pesquisador\n");
    printf("Nome: \n");
    scanf("%s", &pesquisador.nome);
    printf("Periodo: \n");
    scanf("%d", &pesquisador.periodo);
    printf("A: \n");
    scanf("%d", &pesquisador.a);
    printf("b: \n");
    scanf("%d", &pesquisador.b);

    pesquisador.r = trapezio(pesquisador.a, pesquisador.b);
    listaPesquisadores[i] = pesquisador;
  }

  maiorPeriodo = listaPesquisadores[0].periodo;
  menorPeriodo = listaPesquisadores[0].periodo;
  pesquisadorMaiorValorPop = listaPesquisadores[0];
  pesquisadorMenorValorPop = listaPesquisadores[0];

  imprimeCabecalho();

  for(int i = 0; i < total; i++) {
    struct Dados pesq = listaPesquisadores[i];
    imprime(pesq);

    if(pesq.periodo > maiorPeriodo) maiorPeriodo = pesq.periodo;
    if(pesq.periodo < menorPeriodo) menorPeriodo = pesq.periodo;

    if (pesq.r > pesquisadorMaiorValorPop.r) pesquisadorMaiorValorPop = pesq;
    if (pesq.r < pesquisadorMenorValorPop.r) pesquisadorMaiorValorPop = pesq;

    if ((pesq.r + 1200) > 1500) numPeriodosMaiorQue1500 += 1;
  }

  printf("\n\n");
  printf("Maior período: %d\n", maiorPeriodo);
  printf("Menor período: %d\n", menorPeriodo);
  printf("\n");
  printf("Pesquisador com maior valor populacional:\n%s\n %f\n", pesquisadorMaiorValorPop.nome, pesquisadorMaiorValorPop.r+ 1200);
  printf("\n");
  printf("Pesquisador com menor valor populacional:\n%s\n%f\n", pesquisadorMenorValorPop.nome, pesquisadorMenorValorPop.r + 1200);
  printf("\n");
  printf("Número de períodos maior que 1500: %d\n", numPeriodosMaiorQue1500);
  printf("\n\n");
  return 0;
}
