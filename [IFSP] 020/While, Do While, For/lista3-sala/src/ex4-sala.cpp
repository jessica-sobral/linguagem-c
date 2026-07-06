#include <stdio.h>
int main()
{
	printf ("MULTIPLICACAO SUCESSIVA POR 3\n");
	int n,i;
	printf ("Entre com um numero menor que 50:");
	scanf ("%d", &n);
	for (i=n;i<=250;i*=3)
	printf ("Valor: %d\n", i);
	return 0;
}
