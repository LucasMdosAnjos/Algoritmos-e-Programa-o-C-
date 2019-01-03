#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	int x;
	float H=0.0, i;
	
	printf("Informe um valor: ");
	scanf("%d", &x);
	if(x>0)
	{
		for(i=1;i<=x;i++)
		{
			H = H + (1/(i));
		}
	}
	else
	{
		printf("Informe valores validos!");
	}
	printf("Soma H = %f", H);
	return 0;
	
}
