#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	float A, B, H;
	printf("Informe um valor para a base: ");
	scanf("%f", &B);
	printf("Informe um valor para altura: ");
	scanf("%f", &H);
	if(B>0.0 & H>0.0)
	{
		A=B*H/2;
		printf("A area do triangulo é: %f\n", A);	
	}
	else 
	{
		printf("Valores devem ser positivos!\n");
	}
return 0;		
}
