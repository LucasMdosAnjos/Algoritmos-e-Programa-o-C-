#include <stdio.h>
int main(){
	float valor1, valor2;
	printf("Entre com um valor:");
	scanf("%f", &valor1);
	fflush(stdin);
	printf("Entre com um valor 2:");
	scanf("%f", &valor2);
	fflush(stdin);
	printf("A diferença entre %.2f - %.2f = %.2f\n", valor1, valor2, valor1- valor2);
	return 0;
}
