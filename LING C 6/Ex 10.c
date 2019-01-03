#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	float P, H, IMC;
	printf("informe um valor para seu peso: ");
	scanf("%f", &P);
	printf("Informe um valor para sua altura: ");
	scanf("%f", &H);
		if(P>0)
		{
			if(H>0)
			{
				IMC = P / (H*H);
				printf("O seu IMC = %f\n", IMC);
					if(IMC<20)
					{
						printf("Abaixo do peso");
					}
					else
					{
						if(IMC<25)
						{
							printf("Peso normal");
						}
						else
						{
							if(IMC<30)
						{
								printf("Sobre peso");
						}
						else
						{
						if(IMC<40)
						{
						printf("Obeso");
						}
						else
						{
						printf("Obesidade morbida");
						}
						}	
						}
	}		
}
else
{
printf("informe um valor valido!");
}
}
else
{
printf("Informe um valor valido!");
}			
}


