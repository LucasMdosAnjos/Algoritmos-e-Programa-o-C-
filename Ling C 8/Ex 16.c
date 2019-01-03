#include <stdio.h>
#include  <stdlib.h>
#include <math.h>

int main()
{
	int A, S, a1=1, an=100;
	for(A=1;A<=100;A++)
	{
		printf("%d\n", A);
	}
	S=((a1+an)*100)/2;
	printf("\nSoma de todos os termos =%d\n", S);
	return 0;
}
