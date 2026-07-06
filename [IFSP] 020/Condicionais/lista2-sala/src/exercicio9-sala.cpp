#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a,b,c;
	
	printf ("NÚMEROS DIVÍSIVEIS POR 4 OU 5\n");
	printf ("Entre com o primeiro número:");
	scanf  ("%d", &a);
	printf ("Entre com o segundo número:");
	scanf  ("%d", &b);
	printf ("Entre com o terceiro número:");
	scanf  ("%d", &c);
	
	if (((a%4==0)||(a%5==0))||((b%4==0)||(b%5==0))||((c&4==0)||(c%5==0)))
	{
		if ((a%4==0)||(a%5==0))
		{
			printf ("Número divísivel por 4 ou 5: %d\n", a);
		}
		
		if ((b%4==0)||(b%5==0))
		{
			printf ("Número divísivel por 4 ou 5: %d\n", b);
		}
		
		if ((c%4==0)||(c%5==0))
		{
			printf ("Número divísivel por 4 ou 5: %d", c);
		}
	}
	
	else
	{
		printf ("Não foi digitado nenhum número divísivel por 4 ou 5!");
	}
	
	getch();
	return 0;
}
