#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () 
{
	float A, R, H;
	printf("Informe um valor para Raio: ");
	scanf("%f", &R);
	printf("Informe um valor para Altura: ");
	scanf("%f", &H);
		if(R>0.0 && H>0.0)
		{
			A = 2*3.14*R*(R+H);
			printf("A area é igual a: %f\n", A);
		}
		else
		{
			printf("Informe valores validos!");
		}
	return 0;
}
