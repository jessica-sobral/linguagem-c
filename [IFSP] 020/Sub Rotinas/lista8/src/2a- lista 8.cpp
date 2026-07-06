#include <stdio.h>
#include <locale.h>

	int soma();
	int soma(int n){
	    int i;
	    int som=0;
	    for (i=0;i<n;++i){
	    	som=n+i;
		}
	    printf("Soma = %d", som);
	    
	return 0;
}
	
	int main(){
		setlocale(LC_ALL, "Portuguese");
	    int n;
	    printf("\nSOMA DE (n) NÚMEROS\n");
	    printf("\nQuantos números deseja somar?\n");
	    scanf("%d", &n);
	    soma(n);
	    
	return 0;
}
