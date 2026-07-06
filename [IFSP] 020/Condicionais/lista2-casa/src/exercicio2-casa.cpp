#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int resposta,nc,nd;
	
	printf ("DISTÂNCIA ENTRE DOIS NÚMEROS\n");
	printf ("Entre com um número inteiro entre 0 e 100:");
	scanf  ("%d", &nd);
	
	nc=20;
	
	if ((nd>=0)&&(nd<=100))
	{
	    resposta=(nd-nc);
	    
	    if (resposta <0)
	    resposta= resposta*(-1);
	    
		printf ("A distância entre os números é: %d", resposta);	
	}
	
	else
	{
		printf ("Número digitado incorreto!");
	}
	
	getch ();
	return 0;
}
