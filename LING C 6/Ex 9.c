#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	float N1, N2, M , PRES, AULAS;
	printf("Informe a primeira nota: ");
	scanf("%f", &N1);
	printf("Informe a segunda nota: ");
	scanf("%f", &N2);
	printf("informe o numero de aulas totais: ");
	scanf("%f", &AULAS);
	printf("Informe o números de presencas: ");
	scanf("%f", &PRES);
		if(N1<0 || N2<0 || PRES<0 || AULAS<0)
		{
			printf("informe valores validos!");	
		}	
		else
		{
			if(PRES/AULAS<0.75)
			{
				printf("Esta reprovado!");
			}
			else
			{
				M = (N1 + N2)/2;
				if(M<4)
				{
					printf("Esta reprovado!");
				}
				else
				{
					if(M<7)
					{
						printf("Esta em final!");
					}	
					else
					{
						printf("Aprovado");
					}
				}
			}
		}
	return 0;	
}
