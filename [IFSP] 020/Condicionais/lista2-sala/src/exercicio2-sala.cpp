#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	float n1,n2,n3,media,ne,nmedia;
	
	printf ("MÉDIA\n");
	printf ("Entre com o valor da nota 1:");
	scanf  ("%f", &n1);
	printf ("Entre com o valor da nota 2:");
	scanf  ("%f", &n2);
	
	media=(n1+n2)/2;
	
	if (media>=6)
	{
		printf ("Aprovado: %.0f", media);
    }

    else
    {
    	printf ("Entre com o valor do Novo Exame:");
    	scanf  ("%f", &ne);
    	
    	nmedia=(ne+media)/2;
    	
    	if (nmedia>=5)
    	{
    		printf ("Aprovado: %.0f", nmedia);
		}
		
		else
		{
			printf ("Reprovado: %.0f", nmedia);
		}
	}
	
	getch();
	return 0;
	}
