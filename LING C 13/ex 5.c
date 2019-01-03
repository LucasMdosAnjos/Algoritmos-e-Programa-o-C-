#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int M[20][2];
	int i;
	float x, y, z;
	int vote_ruim= 0;
	int vote_otimo= 0;
	int vote_bom = 0;
	int vote_regular = 0;
	int Soma= 0;
	float Media;
	
	for(i=0;i<20;i++)
	{
		printf("Digite sua idade: ");
		scanf("%d", &M[i][0]);
		printf("1 - \t ruim\n");
		printf("2 - \t regular\n");
		printf("3 - \t bom\n");
		printf("4 - \t otimo\n");
		printf("Digite o numero correspondente a avaliacao do filme: ");
		scanf("%d", &M[i][1]);
	}
	for(i=0;i<20;i++)
		{
			if(M[i][1]==4)
			{
				vote_otimo= vote_otimo + 1;
			}
			else
			{
				if(M[i][1]==3)
			{
				vote_bom= vote_bom + 1;
			}
			else
			{
					if(M[i][1]==2)
			{
				vote_regular=vote_regular + 1;
			}
			else
			{
						if(M[i][1]=1)
						{
							vote_ruim = vote_ruim + 1;
						}
			else
			{
				
			}			
			}	
			}	
			}
		x= 100*vote_bom/20;
		y= 100*vote_regular/20;
		z= x-y;	
		}
		printf("Pessoas que votaram ruim= %d\n", vote_ruim);
		printf("Pessoas que votaram regular= %d\n", vote_regular);
		printf("Pessoas que votaram bom=%d\n", vote_bom);
		printf("Pessoas q votaram otimo = %d\n", vote_otimo);
		printf("diferenca percentual entre regular e bom= %f", z);

	return 0;
	
	
}
