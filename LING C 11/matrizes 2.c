#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	int M1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int M2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int M3[3][3];
	int i,j;
	
	for(i=0;i<3;i++)
	   for(j=0;j<3;j++)
	   {
	   	M3[i][j]=M1[i][j] + M2[i][j];
	   	printf("\nM3[%d][%d]=%d\n", i,j,M3[i][j]);
	   }
	return 0;
}
