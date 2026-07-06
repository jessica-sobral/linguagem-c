#include<stdio.h>
int main(){
	int a[5],b[5],i;
	
	printf("Entre com 5 elementos de uma matriz A:\n");
	for(i=0;i<5;++i){
		scanf("%i", &a[i]);
		b[i]=a[i]*3;
	}
	
	printf("5 elementos de uma matriz B:\n");
	for(i=0;i<5;++i){
		printf("%i\n", b[i]);
	}
	return 0;
}
