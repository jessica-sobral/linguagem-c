#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int a;
	
	printf ("NÚMERO PAR OU IMPAR\n");
	printf ("Entre com um número inteiro:");
	scanf  ("%d", &a);
	
	if (a%2==0)
	{
		printf ("%d é par!", a);
	}
	
	else
	{
		printf ("%d é impar!", a);
	}
	
	getch ();
	return 0;
}
