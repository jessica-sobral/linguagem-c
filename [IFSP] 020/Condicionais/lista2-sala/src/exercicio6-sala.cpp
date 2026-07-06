#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float a,b,c,x1,x2,delta;
	
	printf ("EQUAÇÃO DO SEGUNDO GRAU\n");
	printf ("Entre com o valor de A:");
	scanf  ("%f", &a);
	printf ("Entre com o valor de B:");
	scanf  ("%f", &b);
	printf ("Entre com o valor de C:");
	scanf  ("%f", &c);
	
	if (a!=0)
	{
		delta=(b*b-(4*a*c));
		
		if ((delta)<0)
		{
			printf ("A equação não tem solução!");
	    }
	    
	    else
		if ((delta)==0)
		{
			x1=((-b)/2*a);
			x2=x1;
			printf ("A equação tem duas raízes e iguais:\n x1:\n %f\n x2:\n %f", x1,x2);
		}
		
		else
		{
			x1=((-b+sqrt(delta))/(2*a));
			x2=((-b-sqrt(delta))/(2*a));
			printf ("A equação tem duas raízes reais e diferentes:\n x1:\n %f\n x2:\n %f", x1, x2);
		}	
	}
	
	else
    {
	printf ("Não é uma equação de segundo grau!");
    }
    
    getch();
    return 0;
}
