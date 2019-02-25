#include <stdio.h>
void suma(float, float);
void resta(float, float);
void multiplicacion(float, float);
int main()
{
	float n1,n2;
	int c;
	printf("Operaciones basicas\nIngrese primer numero: ");
	scanf("%f", &n1);
	printf("Ingrese segundo numero: ");
	scanf("%f", &n2);
	suma(n1, n2);
	resta(n1, n2);
	multiplicacion(n1, n2);
	return 0;
}
scanf("%d", &c);
switch(c)
{
case 1:
void suma(float x, float y)
{
	printf("La suma: %f\n", x+y);
}
break;
case 2:
void resta(float x, float y)
{
	printf("La resta: %f\n", x-y);
}
break 3:
void multiplicacion(float x, float y)
{
	printf("La multiplicacion %f\n", x*y);
}
case 4;
void division(float x, float y)
{
	printf("La division es %f\n", x/y);
}
break;
}
