#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	float i;
	printf("Informe sua idade: ");
	scanf("%f", &i);
	if(i<0)
	{
	printf("Insira valores validos!");	
	}
	else
	{
		
		if(i<18)
		{
			printf("Menor de idade");
		
		}
		else
		{
			if(i<65)
			{
				printf("so Maior de idade");	
			}
			else
			{
				printf("Pessoa idosa");	
			
			}
				
		}
	}	
	
	return 0;
	
}
