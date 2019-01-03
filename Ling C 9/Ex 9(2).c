#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	float H=0.0, Ht, x, i;
	printf("Informe um valor: ");
	scanf("%f", &i);
	for(x=1;x<=i;x++)
	{
		H= H + ((1/x)*(pow(-1,x)));
	}
	Ht= -(H);
	printf("H= %f\n", Ht);
	return 0;
}
