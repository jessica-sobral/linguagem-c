#include<stdio.h>
int main(){
	int a[8],b[8],i;
	
	printf("Entre com 8 elementos de uma matriz A:\n");
	for(i=0;i<8;++i){
		scanf("%i", &a[i]);
		b[i]=a[i]*a[i];
	}
	
	printf("8 elementos de uma matriz B:\n");
	for(i=0;i<8;++i){
		printf("%i\n", b[i]);
	}
	return 0;
}
