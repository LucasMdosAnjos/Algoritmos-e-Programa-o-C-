#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	float x, i, S;
	printf("Informe um valor x: ");
	scanf("%f", &x);
	if(x>0)
	{
		for(i=1;i<=x;i++)
		{
			S=S+ i/(i+1);
			
		}
	}
	else 
	{
		printf("Informe valores positivos!");
	}
	printf("\nSoma dos termos igual %f\n", S);
	return 0;
}
