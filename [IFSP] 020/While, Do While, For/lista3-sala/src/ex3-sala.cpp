#include <stdio.h>
int main()
{
	printf ("TABUADA DO 2\n");
	int a,b,c;
	a=2;
	for (b=1;b<=10;++b)
	{
		c=a*b;
		printf ("%d X %d = %d\n", a,b,c);
	}
	return 0;
}
