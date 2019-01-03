#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int M1[2][2];
	int M2[2][2];
	int i;
	int j;
	
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			printf("M1[%d][%d]=", i, j);
			scanf("%d", &M2[i][j]);
		}
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			printf("M2[%d][%d]= ", i, j);
			scanf("%d", &M2[i][j]);
		}
	return 0;		
}
