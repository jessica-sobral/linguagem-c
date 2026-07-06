#include <stdio.h>

	int pres();
	int pres(float a, float b, float t){
	   float c;
	   c= a + (a * ( b/100 ) * t );
	   printf("%6.2f\n", c);
}

	int main(){
	    int i, t, a, b;
	    
	    printf("\nDigite o valor:");
	    scanf ("%d", &a);
	    
	    printf("\nDigite a taxa de juros:");
	    scanf ("%d", &b);
	    
	    printf("\nDigite o tempo:");
	    scanf ("%d", &t);
	    
	    pres(a, b, t);
    
    return 0;
}
