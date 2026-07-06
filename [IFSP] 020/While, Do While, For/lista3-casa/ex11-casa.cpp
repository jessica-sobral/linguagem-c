#include <stdio.h>
int main()
{
	printf ("TABUADA\n");
	int a,b=0,r;
	printf ("Entre com um numero de uma tabuada qualquer:\n");
	scanf ("%d", &a);
	for (b=0;b<=10;++b){
		r=a*b;
		printf ("%iX%i=%i\n", a,b,r);
	}
	return 0;
}
