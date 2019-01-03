#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int M1[3][3];
	int M2[3][3];
	int M3[3][3];
	int M4[3][3];
	int M5[3][3];
	int M6[3][3];
	int i;
	int j;
	int x;
	
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			printf("M1[%d][%d]=", i, j);
			scanf("%d", &M1[i][j]);
		}
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			printf("M2[%d][%d]= ", i, j);
			scanf("%d", &M2[i][j]);
		}
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			M3[i][j]= M1[i][j]+ M2[i][j];
			printf("Soma = M3[%d][%d]= %d\n", i, j, M3[i][j]);
		}
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			M4[i][j]= M1[i][j]- M2[i][j];
			printf("Subtracao = M4[%d][%d]= %d\n", i, j, M4[i][j]);
		}
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			M5[i][j]= M1[i][j]* M2[i][j];
			printf("Multiplicacao = M5[%d][%d]= %d\n", i, j, M5[i][j]);
			}
		printf("Digite um numero escalar= ");
		scanf("%d", &x);
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			M6[i][j]= M1[i][j]*x;
			printf("M6[%d][%d]=%d\n", i, j, M6[i][j]);
		}	

	return 0;		

}
