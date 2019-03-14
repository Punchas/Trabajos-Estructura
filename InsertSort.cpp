/* 	PROGRAMA HECHO POR: DIEGO SANCHEZ REBOLLO 
	MATRICULA: 24500608
	ID: 3361683
	PROGRAMA QUE HACE ORDENAMIENTO DE NUMEROS CON ALGORITMO INSERTSORT */
#include <stdio.h>
#include <time.h>

int main()
{
 	time_t t;
  	struct tm *tm;
 	char fechayhora[100];
 	
	int arr[100], actual=0, j, i, n;
	printf("Ingrese numero de datos a ingresar\n");
	scanf("%d", &n);
	printf("------------------\n");
	for(i=0; i<n; i++)
	scanf("%d", &arr[i]);
    for (i=1; i<n; i++) 
	{
        actual=arr[i];
        j=i-1;
        while (j>=0&&arr[j]>actual) 
		{
      		arr[j+1] = arr[j];
     		j--;
    	}
        arr[j+1]=actual;
    }
    printf("Los numeros ordenados son: \n");
    for(i=0; i<n; i++)
	printf("%d ", arr[i]);
	printf("\n-------------------\n");
	printf("PROGRAMA HECHO POR: DIEGO SANCHEZ REBOLLO | MATRICULA: 24500608 | ID: 3361683\n");
	t=time(NULL);
 	tm=localtime(&t);
  	printf ("Hoy es: %02d/%02d/%d y la hora es: %02d:%02d:%02d\n", tm->tm_mday, tm->tm_mon, 1900+tm->tm_year, tm->tm_hour, tm->tm_min, tm->tm_sec);
	return 0;
}

