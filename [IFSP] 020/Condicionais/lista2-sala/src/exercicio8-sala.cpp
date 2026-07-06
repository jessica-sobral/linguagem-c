#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a,b,c;
	
	printf ("NÚMEROS DIVÍSIVEIS POR 2 E POR 4\n");
	printf ("Entre com o primeiro número:");
	scanf  ("%d", &a);
	printf ("Entre com o segundo múmero:");
	scanf  ("%d", &b);
	printf ("Entre com o terceiro número:");
	scanf  ("%d", &c);
	
	if (((a%2==0)&&(a%4==0))||((b%2==0)&&(b%4==0))||((c%2==0)&&(c%4==0)))
	{
		if ((a%2==0)&&(a%4==0))
		{
		   printf ("Número divisível por 2 e 4: %d\n", a);
		}
		
		if ((b%2==0)&&(b%4==0))
		{
			printf ("Número divísivel por 2 e 4: %d\n", b);
		}
		
		if ((c%2==0)&&(c%4==0))
		{
			printf ("Número divísivel por 2 e 4: %d", c);
		}
	}
	
	else
	{
		printf ("Não foi digitado nenhum número divísivel por 2 e 4!");
	}
	
	getch();
	return 0;
}
