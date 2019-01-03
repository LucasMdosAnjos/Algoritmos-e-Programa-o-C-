#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () 
{
	float N1, N2, M;
	printf("Informe a nota 1: ");
	scanf("%f", &N1);
	printf("Informe a nota 2: ");
	scanf("%f", &N2);
		if(N1>=0 || N2>=0)
		{
			M = (N1+N2)/2;	
			if(M<4)
			{
				printf("Reprovado");
			}
			else
			{
				if(M>7)
				{
					printf("Aprovado!");
				}
				else
				{
					printf("Esta em prova final!");
				}
			}
		}
		else 
		{
			printf("informe valores válidos!");
		}
	
	return 0;
	
}

