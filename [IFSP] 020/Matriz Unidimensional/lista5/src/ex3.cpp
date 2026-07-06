#include<stdio.h>
int main(){
	int a[15],b[15],i,fat,j,aux;
	
	printf("Entre com 15 elementos de uma matriz A:\n");
	for(i=0;i<15;++i){
		scanf("%d", &a[i]);
	}
	
	fat=1;
	for(j=0;j<15;++j){
		b[j]=1;
		for(i=1;i<=a[j];++i){
			b[j]*=i;
		}
	}
	
	for(i=0;i<15;++i){
		for(j=i+1;j<15;++i){
			if(b[j] > b[i]){
				aux=b[i];
				b[i]=b[j];
				b[j]=aux;
			}
		}
	}
	
	printf("Elementos de uma matriz B:\n");
	for(i=0;i<15;++i){
		printf("%d", b[i]);
	}
	return 0;
}
