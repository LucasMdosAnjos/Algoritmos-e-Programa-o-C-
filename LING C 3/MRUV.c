#include<stdio.h>
#include <math.h>

int main() {
	printf("Esse teste tem como objetivo avaliar o movimento retilineo \n uniformemente variado de um objeto qualquer!\n ");
	system("pause");
	float Vf, Vi, a, t;
	printf("Informe a velocidade inicial(m/s): ");
	scanf("%f", &Vi);
	printf("Informe a aceleracao do objeto(m/s2): ");
	scanf("%f", &a);
	printf("Informe o tempo desejado(s): ");
	scanf("%f", &t);
	Vf = Vi + a*t;
	printf("Velocidade final = %f\n", Vf);	
    return 0;	
    
}
