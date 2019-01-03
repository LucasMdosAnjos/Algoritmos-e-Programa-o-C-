#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int V[5];
	int i;
	float S=0.0, M;
	
	for(i=0;i<5;i++)
	{
		printf("Informe um valor %d: ", i+1);
		scanf("%d", &V[i]);
		S = S + V[i];
	}
	for(i=0;i<5;i++)
	{
		printf("Valor %d= %d\n", i+1, V[i]);
	}
	for(i=4;i>=0;i--)
	{
		printf("Valor %d= %d\n", i+1, V[i]);
	}
	
	M= S/5;
	printf("Media dos valores = %.2f\n", M);
	return 0;
}
