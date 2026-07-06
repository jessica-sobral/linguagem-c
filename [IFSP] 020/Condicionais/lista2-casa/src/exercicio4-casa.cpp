#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int a,b,c;
	
	printf ("ORDEM MAIOR, MENOR, MEIO\n");
	printf ("Entre com o primeiro número inteiro:");
	scanf  ("%d", &a);
	printf ("Entre com o segundo número inteiro:");
	scanf  ("%d", &b);
	printf ("Entre como terceiro número inteiro:");
	scanf  ("%d", &c);
	
	if ((a>b)&&(a>c)&&(b>c))
	
		printf ("Número maior: %d\n Número menor: %d\n Número do meio: %d", a,c,b);
    
    
    if ((a>b)&&(a>c)&&(c>b))
    
        printf ("Número maior: %d\n Número menor: %d\n Número do meio: %d", a,b,c);
    
	
	if ((b>a)&&(b>c)&&(a>c))
	
		printf ("Número maior: %d\n Número menor: %d\n Número do meio: %d", b,c,a);
    
	
	if ((b>a)&&(b>c)&&(c>a))
	
		printf ("Número maior: %d\n Número menor: %d\n Número do meio: %d", b,a,c);
	
	
	if ((c>a)&&(c>b)&&(a>b))
    
        printf ("Número maior: %d\n Número menor: %d\n Número do meio: %d", c,b,a);
	
	
	if ((c>a)&&(c>b)&&(b>a))
	
		printf ("Número maior: %d\n Número menor: %d\n Número do meio: %d", c,a,b);
    
	
	getch ();
	return 0;
}
