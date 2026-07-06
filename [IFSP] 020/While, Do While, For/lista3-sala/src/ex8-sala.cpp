#include <stdio.h>
int main()
{
	printf ("SERIE DE FIBONACCI\n");
	int atual=1, anterior=0, prox, i;
	for (i=1;i<=15;++i)
	{
		prox=atual+anterior;
		anterior=atual;
		atual=prox;
		printf ("%d: %d\n", i, anterior);
	}
	return 0;
}
