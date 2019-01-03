#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	float Q, C, R, H, N, PU;
	printf("Informe um valor para a altura: ");
	scanf("%f", &H);
	printf("Informe um valor para o raio: ");
	scanf("%f", &R);
	printf("Informe o preço unitario: ");
	scanf("%f", &PU);
	printf("Informe o número de cilindros: ");
	scanf("%f", &N);
		if(R<0 || H<0 || N<0 || PU<0)
		{
			printf("informe valores validos");	
			
		}
		else 
		{
			Q=N*2*3.14*R*(R+H)/15;
			C=Q*PU;
			printf("Quantidade de latas igual: %f\n", Q);
			printf("Custo total: %f", C);
			
		}
	return 0;
}
