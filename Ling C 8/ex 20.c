#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	int A, a1=1, an=100, n=100, Sn, Mf;
	for(A=1;A<=100;A++)
	{
		printf("%d\n", A);
	}
	Sn= ((a1+an)*n)/2;
	Mf= Sn/100;
	printf("\nMedia de todas as partes = %d\n", Mf);
	return 0;
}
