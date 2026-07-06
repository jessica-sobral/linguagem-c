#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a,b,c,d,e;
	
	printf ("DENTRE 5 NÚMEROS, O MAIOR E MENOR\n");
	printf ("Entre com o primeiro número:");
	scanf  ("%d", &a);
	printf ("Entre com o segundo número:");
	scanf  ("%d", &b);
	printf ("Entre com o terceiro número:");
	scanf  ("%d", &c);
	printf ("Entre com o quarto número:");
	scanf  ("%d", &d);
	printf ("Entre com o quinto número:");
	scanf  ("%d", &e);

if ((a>=b)&&(a>=c)&&(a>=d)&&(a>=e))
{
	printf ("Número maior: %d", a);
}

else
if ((b>=a)&&(b>=c)&&(b>=d)&&(b>=e))
{
	printf ("Número maior: %d", b);
}

else
if ((c>=a)&&(c>=b)&&(c>=d)&&(c>=e))
{
	printf ("Número maior: %d", c);
}

else
if ((d>=a)&&(d>=b)&&(d>=c)&&(d>=e))
{
	printf ("Número maior: %d", d);
}

else
if ((e>=a)&&(e>=b)&&(e>=c)&&(e>=d))
{
	printf ("Número maior: %d", e);
}

if ((a<=b)&&(a<=c)&&(a<=d)&&(a<=e))
{
	printf ("Número menor: %d", a);
}

else
if ((b<=a)&&(b<=c)&&(b<=d)&&(b<=e))
{
	printf ("Número menor: %d", b);
}

else
if ((c<=a)&&(c<=b)&&(c<=d)&&(c<=e))
{
	printf ("Número menor: %d", c);
}

else
if ((d<=a)&&(d<=b)&&(d<=c)&&(d<=e))
{
	printf ("Número menor: %d", d);
}

else
if ((e<=a)&&(e<=b)&&(e<=c)&&(e<=d))
{
	printf ("Número menor: %d", e);
}

getch ();
return 0;

}

