#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int main()
{
	int V[15];
	int i;
	for(i=0; i<15; i++)
	{
		printf("Informe o valor V[%d]: ", i+1);
		scanf("%d", &V[i]);
	}
	for(i=14;i>=0;i--)
	{
		printf("%d\n", V[i]);
	}
	system("pause");
	return 0;
}
