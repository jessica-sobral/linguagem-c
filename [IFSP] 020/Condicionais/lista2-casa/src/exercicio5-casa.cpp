#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	float sb,sl,h,ad;
	
	printf ("SALÁRIO DOS FUNCIONÁRIOS\n");
	printf ("Entre com o salário bruto:");
	scanf  ("%f", &sb);
	printf ("Entre com as horas trabalhadas:");
	scanf  ("%f", &h);
	
	if (h>160)
	{
		h=(h-160);
		ad=(sb/160)+(h*0.50);
		sb=(ad+sb);
	}
	
	if (sb<800.00)
	{
		sl=sb;
		printf ("O salário liquído é: %f", sl);
	}
	
	else
	if ((sb>=800.00)&&(sb<=1600.00))
	{
		sl=(sb-(sb*0.13));
		printf ("O salário liquído é: %f", sl);
	}
	
	else
	{
		(sb>1600.00);
		sl=(sb-(sb*0.22));
		printf ("O salário liquído é: %f", sl);
	}
	
	getch ();
	return 0;
}
