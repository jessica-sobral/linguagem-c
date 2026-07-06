#include <stdio.h>
int main()
{
	printf ("SOMA DOS 100 PRIMEIROS NUMEROS INTEIROS\n");
	int i,t;
	for (t=0;i<=100;++i)
	{
		t+=i;
	}
	printf ("Total: %d\n", t);
	return 0;
} 
