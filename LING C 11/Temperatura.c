#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i, DIAS =0;
	float T[7] = {11.2,10.3,9.4,7.2,11.7,9.9,10.1};
	for(i=0;i<7;i++)
	{
		if(T[i]<10.00)
		{
			DIAS=DIAS+1;
		}
	}
	printf("Foram %d dias com Temp abaixo de 10oC", DIAS);
	return 0;
	
}
