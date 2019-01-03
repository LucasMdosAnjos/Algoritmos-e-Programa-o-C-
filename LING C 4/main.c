#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mainn() {
	float PU, Q, PT;
	printf("informe o preco unitario: ");
	scanf("%f", &PU);
	printf("Informe a quantidade: ");
	scanf("%f", &Q);
	if(PU>0.0 && Q>0.0)
	{
	 PT=PU*Q;
	 printf("Preco total = RS %.2f\n", PT);
	}
    else
	{
    printf("Valores devem ser positivos!\n");	
	}
    return 0;
}





