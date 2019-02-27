#include <stdio.h>
void esAlpha(char);
int main()
{
	char c;
	scanf("%c", &c);
	fflush(stdin);
	esAlpha(c);
	return 0;
}
void esAlpha(char x)
{
	if(97>=x&&x<=122)
	{
		printf("Verdadero");
	}
	else
	{
		printf("Falso");
	}
}
