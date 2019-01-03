#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	int x;
	float S=0, n;
	printf("Informe um valor: ");
	scanf("%d", &x);
	if(x>0)
	{
		for(n=1;n<=x;n++)
		{
			S = S + (2*n-1)/(3*n);
		}
	}
	else
	{
		printf("Informe valores positivos!");
	}
	printf("\nSoma igual a %f\n", S);
	return 0;
}
