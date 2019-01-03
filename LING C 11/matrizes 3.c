#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int M[8][8]={{1,3,0,5,4,0,2,1},{1,0,1,0,0,1,0,0},{0,0,0,0,1,0,6,0},{1,0,0,1,1,0,0,1},{0,1,0,4,0,0,1,0},{0,0,3,1,0,0,1,1},{1,0,6,6,0,0,1,0},{1,0,5,0,1,1,0,6}};
	int i, j;
	int P=0 ,B=0,A=0;
	
	for(i=0;i<=7;i++)
	   for(j=0;j<=7;j++)
	   {
	   		if(M[i][j]==1)
			   		P=P+1;
			if(M[i][j]==4)
					B=B+1;
			if(M[i][j]==0)
					A=A+1;
	   }
	printf("Numero de peoes = %d\n", P);
	printf("Numero de bispos = %d\n", B);
	printf("Ausencia de pecas = %d\n", A);
	return 0;	   		
}
