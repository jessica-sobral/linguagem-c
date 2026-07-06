#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	int v1,v2,d;
	
	printf ("DIFERENÇA ENTRE DOIS NÚMEROS\n");
	printf ("Entre com o valor 1:");
	scanf  ("%d", &v1);
	printf ("Entre com o valor 2:");
	scanf  ("%d", &v2);
	
	if (v1>v2)
	{
		d=v1-v2;
		printf ("A diferença entre os dois valores: %d", d);
	}
	
	else
	{
		d=v2-v1;
		printf ("A diferença entre os dois valores: %d", d);
	}
	
	getch ();
	return 0;
}
