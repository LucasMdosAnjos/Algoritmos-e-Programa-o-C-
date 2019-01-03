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
			S = S + (9*n)/(5*n);
		}
	}
	else
	{
		printf("Informe valores positivos!");
	}
	printf("Soma igual %f", S);
	return 0;
}
