#include <stdio.h>
//Programa hecho por: Diego Sanchez Rebollo
//Matricula: 20500608
//ID: 3361683
int main()
{
	int i;
	float prom=0, suma=0, cal, n;
	printf("Cuantos alumnos son? \n");
	scanf("%f", &n);
	for(i=1; i<=n; i++)
	{
		printf("Ingrese calificacion de alumno %d \n", i);
		scanf("%f", &cal);
		suma+=cal;
	}
	prom=suma/n;
	printf("El promedio es %f", prom);
	return 0;
}
