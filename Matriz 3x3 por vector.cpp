#include <stdio.h>
//Programa hecho por: Diego Sanchez Rebollo
//Matricula: 20500608
//ID: 3361683

int main()
{
	int x, y, mat[10][10], vec[10], mult[10][10];
	printf("Ingresa valores de la matriz \n");
	for(y=0; y<=2; y++)
	{
		for(x=0; x<=2; x++)
		{
			scanf("%d", &mat[y][x]);
		}
	}
	printf("La matriz escogida es: \n");
	for(y=0; y<=2; y++)
	{
		for(x=0; x<=2; x++)
		{
			printf("%d ", mat[y][x]);
		}
	printf("\n");
	}
	printf("Ingrese vector \n");
	for(y=0;y<=2;y++)
	{
		scanf("%d", &vec[y]);
	}
	printf("El vector escogido es: \n");
	for(y=0;y<=2;y++)
	{
		printf("%d", vec[y]);
		printf("\n");
	}
	for(y=0; y<=2; y++)
	{
		for(x=0; x<=2; x++)
		{
			mult[x][y]=(vec[0]*mat[y][0])+(vec[1]*mat[y][1])+(vec[2]*mat[y][2]);
		}
	}
	printf("El resultado es: \n");
	for(y=0; y<=0; y++)
	{
		for(x=0; x<=2; x++)
		{
			printf("%d ", mult[y][x]);
			printf("\n");
		}
	}
	return 0;
}
