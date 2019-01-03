#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int M[5][5]= {{0,15,30,5,12},{15,0,10,17,28},{30,10,0,3,11},{5,17,3,0,80},{12,28,11,80,0}};
	int i;
	int j,k;
	
	for(i=0;i<=100;i++)
	{
		printf("Informe a primeira cidade: ");
		scanf("%d", &j);
		printf("Informe a segunda cidade: ");
		scanf("%d", &k);
		if(j>=0 && j<=4)
		{
			if(k>=0 && k<=4)
			{
				printf("Distancia entre as duas cidades = %d\n", M[j][k]);
			}	
			else
			{
				printf("Informe um valor correto!\n");	
			}
		}
		else
		{
			printf("Informe um valor correto!\n");	
		}
	}
	return 0;
	
}


