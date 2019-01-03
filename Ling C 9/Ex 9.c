#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() 
{
	float H, H1 = 0, H2=0, i, j, x, y;         
	printf("informe um valor: ");
	scanf("%f", &x);
	y=x/2;
	if(x>0)
	{
		for(i=1;i<=y;i++)
		{
			H1= H1 + 1/(2*i -1);
		
		}
		for(j=1;j<=y;j++)
		{
			H2 = H2 - 1/(2*j);
		}
	}
	else
	{
		printf("Inform um valor valido!");
	}
	H = H2 + H1;
	printf("H= %f\n", H);
	return 0;
	
	
}
