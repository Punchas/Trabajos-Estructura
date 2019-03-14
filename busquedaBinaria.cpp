#include <stdio.h>
int main(void)
{
	int i, buscar, arr[100], mitad, temp, n, j;
	int contadorA = 0;
	int contadorB = 0;
	printf("Cuantos valores quieres ordenar?\n");
	scanf("%d", &n);
	printf("----------------------\n");
	for(i=0; i<n; i++)
	scanf("%d", &arr[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
for(i=0; i<n;i++)
printf("%d ", arr[i]);
printf("\n");
printf("Ingresa un numero a buscar: ");
scanf("%d", &buscar);

int a=0;
int b=n;
while (a<=b)
{
	contadorA++;
	mitad=(a+b)/2;
	
	if(buscar>200)
	{
		printf("Numero no encontrado\n");
		break;
	}
	if(buscar==arr[mitad])
	{
		printf("Numero %d encontrado en posicion %d\n", arr[mitad], mitad+1);
		break;
    }
	else if(buscar<arr[mitad])
	{
		b=mitad-1;
    }
    else
	{
		a=mitad+1;
    }
    contadorB++;
}

if(contadorA == contadorB)
{
	printf("Numero no encontrado\n");
}
return 0;
}

