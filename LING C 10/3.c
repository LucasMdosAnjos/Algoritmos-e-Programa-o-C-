#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int V[15];
	int i;
	i=0;
	while(i<15)
	{
		printf("Informe um valor V[%d]: ", i);
		scanf("%d", &V[i]);
		i++;
	}
	i=14;
	while(i>=0)
	{
		printf("V[%d]:%d\n", i, V[i]);
		i--;
	}
	return 0;
}
