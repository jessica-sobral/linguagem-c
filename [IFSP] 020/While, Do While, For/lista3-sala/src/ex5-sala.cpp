#include <stdio.h>
int main()
{
	printf ("NUMEROS ATE 200 DIVISIVEIS POR 4\n");
	int n, i;
	i=4;
	for (n=1;n<=200;++n)
	{
		if (n%i==0)
	    printf ("Numero %d eh divisivel por 4\n", n);
    }
	return 0;
}
