#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	int v, i;
	printf("Informe um valor: ");
	scanf("%d", &v);
	if(v>0)
	{
		for(i=1;i<=v;i++)
		{
			printf("%d\n", i*i);
		}
	}
	else
	{
		printf("Valor inválido!");
	}
	return 0;
}
