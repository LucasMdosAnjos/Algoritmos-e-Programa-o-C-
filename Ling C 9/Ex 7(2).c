#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	int i;
	float S=0.0, pi, St;
	for(i=1;i<=51;i++)
	{
		S = S + ((1/pow(2*i-1,3)))*(pow(-1,i));
	}
	St= -(S);
	pi= pow(St*32,1.0/3.0);
	printf("Soma igual= %.8f\n", St);
	printf("pi = %.8f\n", pi);
	return 0;
}
