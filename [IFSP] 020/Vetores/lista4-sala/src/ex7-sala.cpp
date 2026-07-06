#include<stdio.h>
int main(){
	int a[10],b[10],i,j;
	
	printf("Entre com 10 elementos de uma matriz A:\n");
	j=9;
	for(i=0;i<10;++i){
		scanf("%i", &a[i]);
		b[j]=a[i];
		--j;
	}
	
	printf("10 elementos de uma matriz B:\n");
	for(i=0;i<10;++i){
		printf("%i\n", b[i]);
	}
	return 0;
}
