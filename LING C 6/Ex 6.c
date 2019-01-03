#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	float POL, C, JAR, PE;
	printf("Informe uma medida de comprimento em metros: ");
	scanf("%f", &C);
		if(C>0) 
		{
		POL=C/0.0254;
		PE=POL/12;
		JAR=PE/3;
		printf("Em polegadas = %.4f\n", POL);
		printf("Em pes = %.4f\n", PE);
		printf("Em jardas = %.4f\n", JAR);
		}
		else
		{
		printf("informe um valor válido!");	
		}
	return 0;
}        


