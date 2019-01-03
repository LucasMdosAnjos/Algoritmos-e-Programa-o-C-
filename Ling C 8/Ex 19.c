#include <stdio.h>
#include  <stdlib.h>
#include <math.h>

int main() 
{
	int A, n=100, Sn;
	for(A=1;A<=100;A++)
	{
		printf("%d\n", A);
	}
	Sn= (pow(n,2)*pow(n+1,2))/4;
	printf("Soma do cubo dos numeros acima = %d\n", Sn);
	return 0;
	
}
