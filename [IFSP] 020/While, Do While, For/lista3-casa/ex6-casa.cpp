#include <stdio.h>
int main()
{
	printf("NUMEROS IMPARES E PARES DE 20 A 1\n");
	int i=20;
	for (i=20;i>0;--i)
	{
		if (i%3==0){
		printf ("%i eh impar\n", i);}
		else{
		printf ("%i eh par\n", i);}
	}
	return 0;
}
