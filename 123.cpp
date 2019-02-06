#include <stdio.h>
struct Datos {
	char Nombre[20];
	char Apellido_P[20];
	char Apellido_M[20];
	char Edad[20];
	char Sexo[20];
};
int main()
{
    int n, i;
	struct Datos Agenda[20];
	printf("Cuantos datos desea ingresar? \n");
	scanf("%d", &n);
		for(i=1;i<=n; i++)
	{
		printf("Numero en la agenda ->%d\n", i);
		printf("Escriba nombre: ");
		scanf("%s", &Agenda[i].Nombre);
		printf("Escriba apellido paterno: ");
		scanf("%s", &Agenda[i].Apellido_P);
		printf("Escriba apellido materno: ");
		scanf("%s", &Agenda[i].Apellido_M);
		printf("Escriba edad: ");
		scanf("%s", &Agenda[i].Edad);
		printf("Escriba sexo ");
		scanf("%s", &Agenda[i].Sexo);
		printf("\n-------------------------------\n");
	}
	printf("Nombre\tApellido paterno\tApellido materno\tEdad\tSexo\n");
	for(i=1;i<=n;i++)
	{
		printf("%s\t%s\t\t%s\t\t%s\t%s\t",Agenda[i].Nombre, Agenda[i].Apellido_P, Agenda[i].Apellido_M, Agenda[i].Edad, Agenda[i].Sexo);
	}
return 0;	
}
	
	
