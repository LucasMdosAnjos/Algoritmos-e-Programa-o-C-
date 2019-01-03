#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() 
{
	int x, r;
	printf("Informe um valor: ");
	scanf("%d\n", &x);
	for(r=1;x>1;x--)
	{
		r=x*r;
	}
	printf("fatorial= %d\n", r);
	return 0;
}

