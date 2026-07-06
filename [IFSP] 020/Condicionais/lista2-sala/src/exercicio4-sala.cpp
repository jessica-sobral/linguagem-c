#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	float a,b,c;
	
	printf ("TRIÂNGULO\n");
	printf ("Entre com um lado de um triângulo:");
	scanf  ("%f", &a);
	printf ("Entre com o outro lado do triângulo:");
	scanf  ("%f", &b);
	printf ("Entre com o último lado do triângulo:");
	scanf  ("%f", &c);
	
	if (a<(b+c)&&b<(a+c)&&c<(a+b))
	{
		if ((a==b)&&(b==c))
		{
			printf ("É um triângulo equilatero!");
		}
		
		else
		if ((a==b)||(a==c)||(b==c))
		{
			printf ("É um triângulo isósceles!");
		}
		
		else
		{
			printf ("É um triângulo escaleno!");
		}
	}
	
	else
	{
	printf ("Não é um triângulo!");
    }
    
	getch ();
	return 0;
	}
