#include <stdio.h>
int main()
{
	printf ("OS QUADRADOS DE 15 A 200\n");
	int i,q;
	for (i=15;i<=200;++i)
	{
		q=i*i;
		printf ("Quadrado do numero %d eh: %d\n", i,q);
	}
	return 0;
}
