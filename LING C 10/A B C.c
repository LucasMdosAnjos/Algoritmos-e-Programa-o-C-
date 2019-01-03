#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	int A[20], B[20], C[20], soma;
	int i;
	
	for(i=0; i<20; i++)
	{
		printf("Informe um valor para A[%d]= ", i);
		scanf("%d", &A[i]);        
	}
	for(i=0;i<20;i++)
	{
		printf("Informe um valor para B[%d]= ", i);
		scanf("%d", &B[i]);
	}
	for(i=0;i<20;i++)
	{
		C[i]=A[i]+B[i];
		printf("Vetor C[%d]= %d\n",i , C[i]);
	}
	return 0;
}
