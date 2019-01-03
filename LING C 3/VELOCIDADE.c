#include<stdio.h>
#include <math.h>

int main() {
	float D, T, V;
    printf("Informe a distancia (km): ");
	scanf("%f", &D);
	system("pause");
	system("cls");
	printf("Informe o tempo (h): ");
	scanf("%f", &T);
    system("pause");
    system("cls");
	V = D/T;
	printf("Velocidade média V(km/h): %f\n", V);
	system("pause");
	return 0;
	
	}
