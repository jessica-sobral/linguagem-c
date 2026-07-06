#include <stdio.h>
int main()
{
	printf ("POTENCIAS DO 3\n");
	int i,p,r;
	i=3;
	for (p=0;p<=15;++p)
	{
		r=i*p;
		printf ("%d elevado a %d= %d\n", i,p,r);
	}
	return 0;
}
