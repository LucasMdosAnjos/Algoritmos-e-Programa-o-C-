#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	int i, x;
	float St, S1=1/pow(1,3), S2=-(1/pow(3,3)), pi; 
	for(i=1;i<=26;i++)
	{
		S1= S1 + (1/pow(4*i+1,3));
	}
	for(x=1;x<=25;x++)
	{
		S2 = S2 - (1/pow(4*x-1,3));	
	}
	printf("S1=%.8f\n", S1);
	printf("S2=%.8f\n", S2);
	St = S2+S1;
	printf("Soma total= %.8f\n", St);
	pi= pow((St*33.266),1.0/3.0);
	printf("Pi= %.8f\n", pi);
	return 0;
}

