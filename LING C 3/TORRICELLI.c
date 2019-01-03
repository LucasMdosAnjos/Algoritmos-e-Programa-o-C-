#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float Vf, Vo, a, DS;
    printf("Esse teste tem por objetivo validar a equacao de torricceli.\n");
    system("pause");
    printf("Informe uma velocidade final: ");
    scanf("%f", &Vf);
    printf("Informe a aceleracao deste objeto: ");
    scanf("%f", &a);
    printf("Informe o espaço percorrido: ");
    scanf("%f", &DS);
    Vo=sqrt(pow(Vf,2)-(2*a*DS));
	printf("A velocidade final é =%fm/s\n", Vo);
	system("pause");
	return 0; 
}
