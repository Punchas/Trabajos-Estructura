#include <stdio.h>
//Programa hecho por: Diego Sanchez Rebollo
//Matricula: 20500608
//ID: 3361683
//Ingresar numeros para recibir en orden inverso al doble
int main()
{
	int arr[30], i, j;
	for(i=0;i<=4;i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=4;i>=0;i--)
	{
		printf("%d ", arr[i]*2);
	}
	return 0;
}
