#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int mn,a;
	
	printf ("MUDANÇA DE UM NÚMERO NEGATIVO PARA POSITIVO E VICE-VERSA\n");
	printf ("Entre com um número inteiro positivo ou negativo:");
	scanf  ("%d", &a);
	
	if (a>0)
	{
	mn=(a*(-1));
	printf ("Número negativo: %d", mn);
    }
    
    else
    {
    mn=(a*(-1));
    printf ("Número positivo: %d", mn);
	}
	
	getch();
	return 0;
}
