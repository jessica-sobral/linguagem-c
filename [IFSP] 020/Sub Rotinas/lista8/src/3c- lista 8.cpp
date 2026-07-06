#include<stdio.h>

	int pres();
	int pres(float a, float b, float t){
	   float c;
	   c= a + (a * ( b/100 ) * t );
	   printf("%6.2f\n", c);
}

	int main(){
	    int i, t, a, b;
	    
	    printf("\nEntre com o valor:");
	    scanf ("%d", &a);
	    
	    printf("\nEntre com a taxa de juros:");
	    scanf ("%d", &b);
	    
	    printf("\nEntre com o tempo:");
	    scanf ("%d", &t);
	    
	    pres(a, b, t);
	    
    return 0;
}
