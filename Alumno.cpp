#include <stdio.h>
//Programa hecho por: Diego Sanchez Rebollo
//Matricula: 20500608
//ID: 3361683
//Ingresas 3 registros de calificaciones y 
struct Datos {
	char matricula[20];
	char nombre[20];
	char apellido_p[20];
	char apellido_m[20];
	float calif1;
	float calif2;
	float calif3;
};
int main()
{
    int i, califmax1=0, califmax2=0, califmax3=0, califmin1=0, califmin2=0, califmin3=0;
    float n;
	struct Datos Alumnos[20];
	printf("Cuantos alumnos desea ingresar \n");
	scanf("%f", &n);
	for(i=0;i<n;i++)
	{
		printf("Matricula: \n"); 
		scanf("%s", &Alumnos[i].matricula);
		printf("Nombre: \n");
		scanf("%s", &Alumnos[i].nombre);
		printf("Apellido paterno: \n");
		scanf("%s", &Alumnos[i].apellido_p);
		printf("Apellido materno: \n");
		scanf("%s", &Alumnos[i].apellido_m);
		printf("Ingrese primera calificacion: \n");
		scanf("%f", &Alumnos[i].calif1);
		printf("Ingrese segunda calificacion \n");
		scanf("%f", &Alumnos[i].calif2);
		printf("Ingrese tercera calificacion \n");
		scanf("%f", &Alumnos[i].calif3);
		printf("----------------------\n");
		if(califmax1<Alumnos[i].calif1)			/*MAXIMO 1*/
		{
			califmax1=Alumnos[i].calif1;
		}
		if(califmax2<Alumnos[i].calif2)			/*MAXIMO 2*/
		{
			califmax2=Alumnos[i].calif2;
		}
		if(califmax3<Alumnos[i].calif3)			/*MAXIMO 3*/
		{
			califmax3=Alumnos[i].calif3;
		}
		if(califmin1<Alumnos[i].calif1)			/*MINIMO 1*/
		{
			califmin1=Alumnos[i].calif1;
		}
		if(califmin2<Alumnos[i].calif2)			/*MINIMO 2*/
		{
			califmax2=Alumnos[i].calif2;
		}
		if(califmin3<Alumnos[i].calif3)			/*MINIMO 3*/
		{
			califmin3=Alumnos[i].calif3;
		}
	}
	printf("Matricula \t");						/*FORMATO DE RESULTADOS*/
	printf("Nombre \t");
	printf("Apellido p \t");
	printf("Apellido m \t");
	printf("Calif1 \t");
	printf("Calif2 \t");
	printf("Calif3 \t");
	printf("Promedio \t\n");					/*FORMATO DE RESULTADOS*/
	for(i=0;i<n;i++)
	{
		printf("%s \t", Alumnos[i].matricula);											/*OPERACIONES PARA CADA ALUMNO*/
		printf("%s \t", Alumnos[i].nombre);
		printf("%s \t", Alumnos[i].apellido_p);
		printf("%s \t", Alumnos[i].apellido_m);
		printf("%f \t", Alumnos[i].calif1);
		printf("%f \t", Alumnos[i].calif2);
		printf("%f \t", Alumnos[i].calif3);
		printf("%f \n", (Alumnos[i].calif1+Alumnos[i].calif2+Alumnos[i].calif3)/3);		/*OPERACIONES PARA CADA ALUMNO*/
		/* 	PROMEDIOS PARA PARCIALES
			CALIFICACION MAXIMA DEL PARCIAL
			CALIFICACION MINIMA DEL PARCIAL	*/
	}	
	printf("\t\t\tCalif max: %d", califmax1);	/*MAXIMOS*/
	printf("\t%d", califmax2);
	printf("\t%d\n", califmax3);				/*MAXIMOS*/
	printf("\t\t\tCalif min: %d", califmin1);	/*MINIMOS*/
	printf("\t%d", califmin2);
	printf("\t%d\n", califmin3);				/*MINIMOS*/
return 0;	
}
