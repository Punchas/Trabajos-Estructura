/* 	PROGRAMA HECHO POR: DIEGO SANCHEZ REBOLLO 
	MATRICULA: 24500608
	ID: 3361683
	PROGRAMA EN EL QUE INGRESAS Y SACAS DATOS DE LA PILA PARA LUEGO MOSTRARLOS */
#include<stdio.h>
#define T 50
#include <time.h>
#include <string.h>
int isempty();
void push(char dato[T]);
char pop(char dato[T]);
char stacktop();
void mostrarpila();
int i=0;
char pila[T], datop;
int sub=0;
int tope=0;

int main(){
	time_t t;
  	struct tm *tm;
 	char fechayhora[100];
 	
	int x,argc;
	char argv[100];
	printf("Evalua expresion: \n");
	do
	{
		getchar();
		gets(argv);
		for(i=0;i<=strlen(argv);i++)
		{
			push(argv);
			pop(argv);
		}
		if(isempty()!=0)
		{
			printf("Esta balanceada\n");
		}
		if(isempty()!=1||tope<0) 
		{
			printf("No esta balanceada\n");
		}
	tope=0;
	printf("Si desea salir presione 0, para seguir evaluando presione 1\n");
	scanf("%d", &x);
	printf("\n");
	}
	while(x!=0);
	
	printf("\n-------------------\n");
	printf("PROGRAMA HECHO POR: DIEGO SANCHEZ REBOLLO | MATRICULA: 24500608 | ID: 3361683\n");
	t=time(NULL);
 	tm=localtime(&t);
  	printf ("Hoy es: %02d/%02d/%d y la hora es: %02d:%02d:%02d\n", tm->tm_mday, tm->tm_mon, 1900+tm->tm_year, tm->tm_hour, tm->tm_min, tm->tm_sec);
return 0;
}
int isempty(){
	if(tope==0)
	return 1;
	else
	return 0;
}
void push(char dato[T]){
	if(tope<=T&&dato[i]=='('||dato[i]=='[')
	pila[tope++]=dato[i];
}
char pop(char dato[T]){
	if(isempty()!=1&&dato[i]==')'||dato[i]==']')
	{
		return pila[--tope];
	}
}
char stacktop(){
	return pila[tope-1];
}
void mostrarpila(){
	printf("\n");
	if(isempty()!=1){
		for(int i=tope-1;i>=0;i--){
			printf("Pila[%d] = %c\n",i,pila[i]);
		}
}
		else{
		printf("No hay datos en la pila\n\n");}
		printf("\n");
}
