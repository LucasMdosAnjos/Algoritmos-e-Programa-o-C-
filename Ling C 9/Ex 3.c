#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	int x;
	float n, S;
	
	printf("Informe um valor x: ");
	scanf("%d", &x);
	if(x>0)
	{
		for(n=1;n<=x;n++)
		{
			S = S+ n / sqrt(n+2);
		}
	}
	else
	{
		printf("Informe valores positivos!");
	}
	printf("Soma igual %f", S);
	return 0;
}
