#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	int x, v;
	for(x=1;x<=10;x++)
	{
		printf("Informe um valor: ");
		scanf("%d", &v);
		printf("%d\n", v*v*v);
	}
	return 0;	
}
