#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float 	CM, d, v;
	printf("Informe distancia(km): ");
	scanf("%f", &d);
	system("cls");
	printf("Informe o volume(L): ");
	scanf("%f", &v);
	if (d>0 && v>0)
	{
		CM = d/v;
		printf("Consumo medio = %.2f Km/L\n", CM);
	}
	else
	{
		printf("Valores devem ser positivos");
	}
	return 0;
	
}
