#include <stdio.h>
//Programa hecho por: Diego Sanchez Rebollo
//Matricula: 20500608
//ID: 3361683
int main()
{
	int n=0, i=0 ,j=0 , salario=0, ph=0;
	printf("Cuanto es el pago por hora \n");
	scanf("%d", &ph);
	printf("Cuanto es el numero de horas trabajadas \n");
	scanf("%d", &n);
	if(n<=40)
	{
		salario=n*ph;
	}
	
	if(n>48)
		{
			i=n-40;
			j=i-8;
			i=ph*2;
			j=ph*3;
			n=(n-i-j)*ph;
		}
		else
		{
			i=n-40;
			i=ph*2;
			n=(n-j)*ph;
			salario=i+n;
		}
	printf("%d", salario);
	return 0;
}
