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
	Sn=((n+1)*n*(2*n+1))/6;
	printf("\nA Soma do quadrado dos termos acima=%d\n", Sn);
	return 0;
}	
