#include <stdio.h>
int main()
{
	int i, n=0;
	struct Datos;
		char Nombre[20];
		char Apellido_P[20];
		char Apellido_M[20];
		int Edad;
		char Sexo[2];
		struct Datos Agenda;
	printf("Cuantos datos desea ingresar? \n");
	scanf("%d", &n);
		for(i=0;i<n; i++)
	{
		Agenda[i].Nombre=scanf("%c", &Nombre);
		Agenda[i].Apellido_P=scanf("%c", &Apellido_P);
		Agenda[i].Apellido_M=scanf("%c", &Apellido_M);
		Agenda[i].Edad=scanf("%d", &Edad);
		Agenda[i].Sexo=scanf("%c", &Sexo);
	}
	return 0;
}
