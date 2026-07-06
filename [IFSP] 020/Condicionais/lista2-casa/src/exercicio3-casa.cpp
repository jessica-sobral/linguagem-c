#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	float med;
	
	printf ("ARREDONDAMENTO DE MÉDIA\n");
	printf ("Entre com a média do aluno (de 0 a 10, podendo ser decimal):");
	scanf  ("%f", &med);
	
	if (fmod(med,1)>0.5)
	{
		med+=1-(fmod(med,1));
		printf ("Média arredondada: %f", med);
	}
	
	else
	{
		med-=(fmod(med,1));
		printf ("Média arredondada: %f", med);
	}
	
	getch ();
	return 0;
}
