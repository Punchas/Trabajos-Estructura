#include <stdio.h>
//Programa hecho por: Diego Sanchez Rebollo
//Matricula: 20500608
//ID: 3361683
//Ingresas cuantos datos quieres ingresar, los ingresas y los imprime
struct Datos {
	char Nombre[20];
	char Apellido_P[20];
	char Apellido_M[20];
	int Edad;
	char Sexo[2];
};
int main()
{
    int n, i; 
	float num_hombres=0, num_mujeres=0, sum_edadF=0, sum_edadM=0;
	struct Datos Agenda[20];
	printf("Cuantos datos desea ingresar? \n");
	scanf("%d", &n);
		for(i=1;i<=n; i++)
	{
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
		//Proceso para hombres
		if(Agenda[i].Sexo[0]=='M' || Agenda[i].Sexo[0]=='m')
		{
			num_hombres++;
			sum_edadM+=Agenda[i].Edad;
		}
		//Proceso para mujeres
		else
		{
			num_mujeres++;	
			sum_edadF+=Agenda[i].Edad;
		}	
	}
	printf("Nombre \tAp paterno \tAp materno \tEdad \tSexo \n");
	for(i=1;i<=n;i++)
	{
		printf("%s \t", Agenda[i].Nombre);
		printf("%s \t", Agenda[i].Apellido_P);
		printf("%s \t", Agenda[i].Apellido_M);
		printf("%d \t" , Agenda[i].Edad);
		printf("%s \t \n", Agenda[i].Sexo);
	}
	printf("Numero de Hombres: %f\n", num_hombres);
	printf("Numero de Mujeres: %f\n", num_mujeres);
	printf("Promedio de edad Hombres: %f\n", sum_edadM/num_hombres);
	printf("Promedio de edad mujeres: %f\n", sum_edadF/num_mujeres);
	printf("Promedio de edad del grupo: %f\n", (num_hombres+num_mujeres)/(sum_edadM+sum_edadF));

return 0;	
}
