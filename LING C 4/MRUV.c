#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() 
{
	float S, So, Vo, t, a;
	printf("Informe a posicao inicial: ");
	scanf("%f", &So);
	system("pause");
	system("cls");
	printf("Informe a velocidade inicial: ");
	scanf("%f", &Vo);
	system("pause");
	system("cls");
	if (Vo>0.0)
	{
		printf("Informe o instante de tempo: ");
		scanf("%f", &t);
		system("pause");
		system("cls");
		if(t>0.0)
		{
			printf("Informe uma aceleracao: ");
			scanf("%f", &a);
			system("pause");
		    system("cls");
			if(a>0.0)
			{
				S = So + Vo*t + a*pow (t,2)/2;
				printf("Posicao final= %.2f\n", S);	
			}
			else
			{
				printf("A aceleracao deve ser positiva!");		
			}
		}
		else
		{
			printf("O tempo deve ser positivo!");	
		}
	}
	else
	{
		printf("A velocidade deve ser positiva!");	
	}
    return 0;	
}
