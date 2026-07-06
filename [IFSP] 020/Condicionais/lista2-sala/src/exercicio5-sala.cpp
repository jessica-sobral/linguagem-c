#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	int a,b,c;
	
	printf ("NÚMEROS EM ORDEM CRESCENTE\n");
	printf ("Entre com o valor de A:");
	scanf  ("%d", &a);
	printf ("Entre com o valor de B:");
	scanf  ("%d", &b);
	printf ("Entre com o valor de C:");
	scanf  ("%d", &c);
	
	if ((a<=b)&&(b<=c))
	{
		printf ("Valores em ordem crescente: %d\n %d\n %d", a,b,c);
	}
	
	else
	if ((a<=c)&&(c<=b))
	{
		printf ("Valores em ordem crescente: %d\n %d\n %d", a,c,b);
	}
	
	else
	if ((b<=a)&&(a<=c))
	{
		printf ("Valores em ordem crescente: %d\n %d\n %d", b,a,c);
	}
	
	else
	if ((b<=c)&&(c<=a))
	{
		printf ("Valores em ordem crescente: %d\n %d\n %d", b,c,a);
	}
	
	else
	if((c<=a)&&(a<=b))
	{
		printf ("Valores em ordem crescente: %d\n %d\n %d", c,a,b);
	}
	
	else
	{
		printf ("Valores em ordem crescente: %d\n %d\n %d", c,b,a);
	}
	
	getch ();
	return 0;
	}
