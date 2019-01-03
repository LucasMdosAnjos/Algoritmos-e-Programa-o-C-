#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	int x;
	float v, vo, a, t, s, so;
	for(x=1;x<=10;x++)
	{
		printf("\nPosicao inicial do veiculo(m): ");
		scanf("%f", &so);
		printf("Informe um valor para velocidade(m/s): ");
		scanf("%f", &vo);
		printf("Informe um valor para tempo (s): ");
		scanf("%f", &t);
		printf("Informe um valor para aceleracao(m/s2): ");
		scanf("%f", &a);
		v = vo + a*t;
		s = so + vo*t + (a*(t*t))/2;
		printf("Velocidade final e posicao final = %f m/s --- %f m ", v, s);
		system("pause");
		system("cls");
	}
	return 0;
}
