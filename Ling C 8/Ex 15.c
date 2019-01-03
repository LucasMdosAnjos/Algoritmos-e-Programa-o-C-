#include <stdio.h>
#include  <stdlib.h>
#include <math.h>

int main ()
{
	float x, n, V;
	for(x=1;x<=10;x++)
	{
		printf("Informe um valor: ");
		scanf("%f", &n);
		V=log10(n);
		printf("%f\n", V);
	}
	return 0;
}
