#include<stdio.h>
#include<math.h>

	int pot();
	int pot(int b, int e ){
	    int c;
	    
	    c=pow(b,e);
	    
	    printf("\nResultado = %d \n", c);
	    return 0;
}

	int main(){
	    int b, e;
	    
	    printf("\nDigite a base");
	    scanf("%d", &b);
	    
	    printf("\nDigite o expoente");
	    scanf("%d", &e);
	    
	    pot(b, e);
   		return 0;
}
