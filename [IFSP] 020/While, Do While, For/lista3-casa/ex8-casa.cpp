# include <stdio.h>
int main()
{
	printf ("NUMEROS PARES DE 1 A 20\n");
	int i=0;
	do {
		i+=2;
		printf ("%i\n", i);
	}
	while (i<20);
	return 0;
}
