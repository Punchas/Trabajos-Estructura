#include <stdio.h>
//Programa hecho por: Diego Sanchez Rebollo
//Matricula: 20500608
//ID: 3361683
//Ingresas cuantos datos quieres ingresar, los ingresas y los imprime
struct Datos {
	char Nombre[20];
	char Apellido_P[20];
	char Apellido_M[20];
	int Edad[20];
	char Sexo[20];
};
int main()
{
    int n, i, num_hombres=0, num_mujeres=0, sum_edadF=0, sum_edadM=0, sumaT=0;
	struct Datos Agenda[20];
	printf("Cuantos datos desea ingresar? \n");
	scanf("%d", &n);
		for(i=1;i<=n; i++)
	{
		printf("Numero en la agenda -> %d\n", i);
		printf("Escriba nombre: ");
		scanf("%s", &Agenda[i].Nombre);
		printf("Escriba apellido paterno: ");
		scanf("%s", &Agenda[i].Apellido_P);
		printf("Escriba apellido materno: ");
		scanf("%s", &Agenda[i].Apellido_M);
		printf("Escriba edad: ");
		scanf("%d", &Agenda[i].Edad);
		printf("Escriba sexo ('M' o 'F'): ");
		scanf("%s", &Agenda[i].Sexo);
		printf("\n-------------------------------\n");
	}
	printf("Nombre\tApellido paterno\tApellido materno\tEdad\tSexo\n");
	for(i=1;i<=n;i++)
	{
		printf("%s\t%s\t\t%s\t\t%d\t%s\t",Agenda[i].Nombre, Agenda[i].Apellido_P, Agenda[i].Apellido_M, Agenda[i].Edad, Agenda[i].Sexo);
	}
	//No se que hacer//
	/*
	for(i=1; i<=n; i++)
	{
		//Proceso para hombres
		if(Agenda[i].Sexo=='M')
		{
			num_hombres++;
		}
		//Proceso para mujeres
		if(Agenda[i].Sexo=='F')
		{
			num_mujeres++;	
		}
	}
	printf("Numero de Hombres: %d", num_hombres);
	printf("Numero de Mujeres: %d", num_mujeres);
	printf("Promedio de edad Hombres: %d", sum_edadM/num_hombres);
	printf("Promedio de edad mujeres: %d", sum_edadF/num_mujeres);
	printf("Promedio de edad del grupo: %d", );
	*/
return 0;	
}
