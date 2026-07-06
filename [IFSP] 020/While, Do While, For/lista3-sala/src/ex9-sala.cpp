#include <stdio.h>
int main()
{
	printf ("POTENCIA\n");
	int b,e,i,r;
	printf ("Entre com a base da potencia:");
	scanf ("%d", &b);
	printf ("Entre com o expoente da potencia:");
	scanf ("%d", &e);
	r=1;
	for (i=1;i<=e;++i)
	r*=b;
	printf ("Base: %d\n Expoente: %d\n Resultado: %d\n", b,e,r);
	return 0;
}
