#include <stdio.h>
#include <malloc.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct alumno{
	char nombre [20];
	float *calif;
};

void reserva(struct alumno **, int *, int *);
void altas(struct alumno *,int,int);
void visualiza(struct alumno *, int, int);

int main()
{
	int n_alumno, n_cal;
	struct alumno *dato;
	
	reserva(&dato,&n_alumno,&n_cal);
	altas(dato,n_alumno,n_cal);
	visualiza(dato,n_alumno,n_cal);
	getch();
	return 0;
}

void reserva(struct alumno **dato, int *n_alumno, int *n_cal)
{
	printf("\nProporciona el no. de alumno a capturar: ");
	scanf("%d", n_alumno);
	printf("\nProporciona el no. de calificaciones por alumno: ");
	scanf("%d", n_cal);
	fflush(stdin);
	*dato=(struct alumno *)malloc(sizeof(struct alumno) * *n_alumno);
	for(int i=0; i<*n_alumno;i++)
	{
		*&((*dato+i)->calif)=(float *)malloc(sizeof(float) * *n_cal);	
	}
	getch();
}
void altas(struct alumno *dato, int n_alumno, int n_cal)
{
	int i,j;
	for(i=0;i<n_alumno;i++)
	{
		printf("\n\tCaptura de alumno y sus calificaciones: \n");
		printf("\n\tNombre del alumno:");
		gets((dato+i)->nombre);
		fflush(stdin);
		for(j=0; j<n_cal;j++)
		{
			printf("\n\t\t Calificaciones[%d]= ", j+1);
			scanf("%f",((dato+i)->calif)+j);
			fflush(stdin);
		}
		
	}
}
void visualiza(struct alumno *dato, int n_alumno, int n_cal)
{
	int i, len;
	printf("\n\n\tNombre			");
	for (i=0;i<n_cal;i++)
	printf("Calif%d\t",i+1);
		printf("\n\t------------------\t");
	for(i=0;i<n_cal;i++)
		printf("-------\t",i);
	printf("\n");
	for(i=0; i<n_alumno; i++)
	{
		printf("\t%s", *&(dato+i)->nombre);
		len=20-strlen(*&(dato+i)->nombre);
		for(int j=0; j<len; j++)
		printf(" ");
		for(int j=0;j<n_cal;j++)
		{
			printf("\t%5.2f",*(((dato+i)->calif)+j));
		}
		printf("\n");
	}
		
}
