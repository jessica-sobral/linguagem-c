#include <stdio.h>
int main()
{
	printf ("NUMEROS PARES E IMPARES DE 1 A 20\n");
	int i=0;
	do {
		++i;
		if (i%2==0){
			printf ("%i eh par\n", i);
		}
		else{
			printf ("%i eh impar\n", i);
		}
	}
	while (i<20);
	return 0;
}
