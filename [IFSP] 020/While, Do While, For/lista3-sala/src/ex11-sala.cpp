#include <stdio.h>
int main()
{
	printf ("MAIOR E MENOR ENTRE 5 NUMEROS\n");
	int me=147483647,ma=-147483648,n,i;
	for (i=1;i<=5;++i)
	{
		printf ("Entre com um numero:");
		scanf ("%d", &n);
		if (n>ma)
		{
			ma=n;
		}
		if (n<me)
		{
			me=n;
		}
	}
	printf ("Menor: %d\n Maior: %d", me,ma);
	return 0;
}
