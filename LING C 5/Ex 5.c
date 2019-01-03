#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	float A, R;
	printf("Informe um valor para o Raio: ");
	scanf("%f", &R);
		if(R>0)
		{
			A=3.14*pow(R,2);
			printf("A area do circulo = %.3f\n", A);
		}
		else
		{
			printf("Informe um valor valido!");
		}
	return 0;	
	
}
