#include <stdio.h>
int main()
{
	printf ("SOMA DOS PARES DE 1 A 500\n");
	int i,t;
	for (t=1;i<=500;i+=2)
	{
		t+=i;
	}
	printf ("Total: %d\n", t);
	return 0;
}
