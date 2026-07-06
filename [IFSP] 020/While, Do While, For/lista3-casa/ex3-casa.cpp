#include <stdio.h>
int main()
{
	printf ("NUMEROS IMPARES E PARES DE 1 A 20\n");
	int i=0;
	while (i<20)
	{
		++i;
		if (i%2==0){
		printf ("%i eh par\n", i);}
	    else{
	    printf ("%i eh impar\n", i);}
	}
	return 0;
}
