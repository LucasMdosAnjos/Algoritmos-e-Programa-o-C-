#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mainnn() {
	float PU, Q, PT;
	printf("informe o preco unitario: ");
	scanf("%f", &PU);
	printf("Informe a quantidade: ");
	scanf("%f", &Q);
	if(PU <=0 || Q<=0)
	{
		printf("Valores devem ser positivos!\n");
	}
	else
	{
		PT = PU*Q;
		printf("Preco total = R$ %.2f\n", PT);
	}
	return 0;
}
