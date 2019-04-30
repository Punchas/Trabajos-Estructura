#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i , x, suma =0, prom;
	FILE* fichero;
	fichero=fopen("ejemploA1.txt", "wt");
	printf("Ingrese cuantos numeros se van a promediar\n");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &x);
		fprintf(fichero, "%d\n", x);
		suma+=x;
	}
	prom=suma/n;
	fprintf(fichero, "%d\n", prom);
	printf("promedio: %d\n" , prom);
	fclose(fichero);
	printf("Fin");
	return 0;
}
