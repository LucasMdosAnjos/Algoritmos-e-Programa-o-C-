#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	int V[5]={7,3,9,2,0};
	int i, MAIOR;
	MAIOR = V[0];
	for(i=1;i<5;i++)
	{
		if(V[i]>MAIOR)
		{
			MAIOR=V[i];
		}
	}
	printf("Maior = %d\n", MAIOR);
	return 0;
}

