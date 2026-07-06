#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	float n1,n2,n3,media;
	
	printf ("MÉDIA\n");
	printf ("Entre com o valor da nota 1:");
	scanf  ("%f", &n1);
	printf ("Entre com o valor da nota 2:");
	scanf  ("%f", &n2);
	printf ("Entre com o valor da nota 3:");
	scanf  ("%f", &n3);
	
	media=(n1+n2+n3)/3;
	
	if (media<6)
	
	{
     printf ("Reprovado: %.0f", media);
    }
    
    else
    {
	printf ("Aprovado: %.0f", media);
    }
    
	getch();
	return 0;
}
