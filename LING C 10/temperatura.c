#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	float T[7], soma=0.0, media;
	int i;
	i=0;
	while(i<7)
	{
		printf("informe T[%d]: ", i+1);
		scanf("%f", &T[i]);
		soma = soma + T[i];
		i++;
	}
	media = soma/7;
	printf("Media semanal de temperatura = %f\n", media);
	return 0;
}


