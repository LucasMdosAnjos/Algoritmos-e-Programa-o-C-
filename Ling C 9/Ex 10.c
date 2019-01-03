#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int x, fn, f1=1, f2= 1, i;
	printf("1.o termo=%d\n", f1);
	printf("2.o termo=%d\n", f2);
	printf("Informe um valor: ");
	scanf("%d", &x);
	if(x>0)
	{
		for(i=3;i<=x;i++)
		{
			fn= f1+f2;
			printf("%d.o termo=%d\n",i, fn);	
			f1=f2;
			f2=fn;
		}	
	}
	else
	{
		printf("Informe valores validos!");
	}
	return 0;
}
