#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () 
{
	float I;
	printf("Informe sua idade: ");
	scanf("%f", &I);
		if(I<0)
		{
			printf("informe um valor valido!");	
		}
		else
		{
			if(I<16)
			{
			printf("Nao eleitor");	
			}
			else
			{
				if(I<18)
				{
				printf("Eleitor facultativo");	
				}
				else
				{
					if(I<65)
					{
					printf("Eleitor obrigatorio");	
					}
					else
					{
					printf("Eleitor facultativo");	
					}
				}
			}
			
		}
	return 0;
	
}
