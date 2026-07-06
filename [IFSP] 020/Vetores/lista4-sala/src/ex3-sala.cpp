#include<stdio.h>
int main(){
	int a[5],b[5],c[5],i;
	
	printf("Entre com 5 elementos de uma matriz A:\n");
	for(i=0;i<5;++i){
		scanf("%i", &a[i]);
	}
	printf("Entre com 5 elementos de uma matriz B:\n");
	for(i=0;i<5;++i){
		scanf("%i", &b[i]);
		c[i]=a[i]-b[i];
	}
	printf("5 elementos de uma matriz C:\n");
	for(i=0;i<5;++i){
		printf("%i\n", c[i]);
	}
	return 0;
}
