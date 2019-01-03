#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float S, So, Vo, a, t;	
	printf("Esse teste tem como objetivo validar a funcao da posicao!\n");
	system("pause");
	printf("Entre com  a posição inicial do objeto(m): ");
	scanf("%f", &So);
	printf("Entre com uma velocidade inicial do objeto(m/s): ");
	scanf("%f", &Vo);
	printf("Entre com um tempo em (s): ");
	scanf("%f", &t);
	printf("Entre com uma aceleracao(m/s2): ");
	scanf("%f", &a);
	S = So + Vo*t + a*pow(t,2)/2;
	printf("Posicao final= %f\n", S);
	system("pause");
	return 0;
}


