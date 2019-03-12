/* 	PROGRAMA HECHO POR: DIEGO SANCHEZ REBOLLO 
	MATRICULA: 24500608
	ID: 3361683
	PROGRAMA QUE HACE ORDENAMIENTO DE NUMEROS CON ALGORITMO QUICKSORT */
#include <stdio.h>
int main()
{
	int arr[100], actual=0, j, i, n;
	printf("Ingrese numero de datos a ingresar\n");
	scanf("%d", &n);
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
    for(i=0; i<n; i++)
	printf("%d", arr[i]);
	return 0;
}


