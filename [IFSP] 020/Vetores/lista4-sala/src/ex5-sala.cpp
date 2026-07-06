#include<stdio.h>
int main(){
	int a[20],b[30],c[50],i;
	
	printf("Entre com 20 elementos de uma matriz A:\n");
	for(i=0;i<20;++i){
		scanf("%i", &a[i]);
	}
	printf("Entre com 30 elementos de uma matriz B:\n");
	for(i=0;i<30;++i){
		scanf("%i", &b[i]);
		c[i]=a[i];
		c[i+20]=b[i];
	}
	printf("50 elementos de uma matriz C:\n");
	for(i=0;i<50;++i){
		printf("%i\n", c[i]);
	}
	return 0;
}
