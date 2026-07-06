#include <stdio.h>
int main()
{
	printf ("CALCULADORA\n");
	int a,b,r;
	char operacoes;
	do {
	printf ("Escolha uma operacao:\n");
	printf ("+\n");
	printf ("-\n");
	printf ("*\n");
	printf ("/\n");
	printf ("S-Sair\n");
	fflush(stdin);
	scanf ("%c", &operacoes);
	if (operacoes=='S') break;
	printf ("Entre com dois valores:");
	scanf ("%i %i", &a, &b);
	
	switch (operacoes){
	case '+':
		r=a+b;
		printf ("%i+%i=%i\n\n", a,b,r);
		break;
	case '-':
		r=a-b;
		printf ("%i-%i=%i\n\n", a,b,r);
		break;
	case '*':
		r=a*b;
		printf ("%i*%i=%i\n\n", a,b,r);
		break;
	case '/':
		r=a/b;
		printf ("%i/%i=%i\n\n", a,b,r);
		break;
	default:
		printf ("Operacao invalida!\n\n");
	}
	}
	while (operacoes!='S');
	return 0;
	}
