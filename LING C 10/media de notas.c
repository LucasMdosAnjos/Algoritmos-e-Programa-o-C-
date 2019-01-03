#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	float media, soma=0.0;
	float nota[30];
	int i=0;
	while(i<30)
	{
		printf("Informe a nota: %d\n", i+1);
		scanf("%f", &nota[i]);
		soma= soma + nota[i];
		i++;
	}
	media = soma/3.0;
	printf("\RELATORIO FINAL\n");
	i=0;
	while(i<30)
	{
		printf("Nota %d = %f\n", i+1, nota[i]);
		i++;
	}
	printf("Media geral da turma: %f\n", media);
	return 0;
}

