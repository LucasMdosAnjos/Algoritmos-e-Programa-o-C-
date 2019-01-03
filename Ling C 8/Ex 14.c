#include <stdio.h>
#include  <stdlib.h>
#include <math.h>

int main() 
{
	int x, v, n;
	for(x=1;x<=10;x++)
	{
		printf("Informe um valor: ");
		scanf("%d", &v);
		n= sqrt(v);
		printf("%d\n", n);
	}
	return 0;
}
