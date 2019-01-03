#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int V[5]={7,3,9,2,0};
	int i, MENOR;
	MENOR=V[0];
	for(i=0;i<5;i++)
	{
		if(V[i]<MENOR)
		{
			MENOR=V[i];
		}
	}
	printf("Menor= %d\n", MENOR);
	return 0;
}
