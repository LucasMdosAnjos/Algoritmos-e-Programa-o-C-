#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int M1[3][3],M2[3][3],M3[3][3];
	int i, j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			printf("M1[%d][%d]=", i,j);
			scanf("%d", &M1[i][j]);
		}
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			printf("M2[%d][%d]=", i,j);
			scanf("%d", &M2[i][j]);
		}
			for(i=0;i<3;i++)
				for(j=0;j<3;j++)
				{
					M3[i][j]=M1[i][j] + M2[i][j];
					printf("\nM3[%d][%d]=%d\n", i,j,M3[i][j]);	
				}
				return 0;
}
