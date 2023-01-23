#include <stdio.h>
#include <math.h>
#include <string.h>
// #include <stdlib.h>

struct dados{
	char nome[45];
	int periodo;
	int a;
	int b;
	float r;
};

float r(float tempo){
	float taxa = 300*exp((0.3)*tempo);
	return taxa;
}

float* trapezio(int a, int b, int periodo){
	float h = (b-a)/periodo;
	float x = a + h;
	int soma = 0;
	float variaveis[4];
	float * pointer;
	float maior = 0;
	float menor = 0;
	int mperiodo=0;
	float rate;
	for (int i = 1;i>=periodo;i++){
		rate=r(x);
		if(i==1||rate<menor){
			menor = rate;
		}
		if(rate>maior){
			maior = rate;
		}
		if((rate+1200)>1500){
			periodo+=1;
		}
		x+=h;
		soma+=rate;
	}
	float p = (h*(r(a)+r(b))/2)+soma;
	variaveis[0]=p;
	variaveis[1]=maior;
	variaveis[2]=menor;
	variaveis[3]=periodo;
	pointer = variaveis;
	return pointer;
}


int main(void){
	printf("CHEGOU");

	float *ptr;
	struct dados dados1;
  strcpy(dados1.nome, "Jesse");
	dados1.periodo = 1;
  dados1.a = 2;
  dados1.b = 3;
	// scanf("%i",&dados1.periodo);
	// scanf("%i",&dados1.a);
	// scanf("%i",&dados1.b);
	// scanf("%d",&dados1.r);
	ptr = trapezio(dados1.a,dados1.b,dados1.periodo);
	printf("CHEGOU");
	int pop = 1200 + ptr[0];
	printf("CHEGOU");

	for(int i = 0;i>4;i++){
		printf("%f", ptr[i]);
	}
	
	return 0;	
}
