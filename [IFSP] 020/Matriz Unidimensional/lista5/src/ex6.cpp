#include<stdio.h>
int main(){
	int a[30],b[30],i,valor;
	
	printf("Entre com 30 elementos de uma matriz A:\n");
	for(i=0;i<30;++i){
		scanf("%d", &a[30]);
	}
	
	for(i=0;i<30;++i){
		b[i]=a[i]*3;
	}
	
	printf("\n30 elementos de uma matriz B:\n");
	for(i=0;i<30;++i){
		printf("%d\n", b[i]);
	}
	
	printf("Que valor de B tu quer pesquisar?\n");
	scanf("%d", &valor);
	for(i=0;i<30;++i){
		if(b[i]==valor){
			printf("\nO elemento %d se encontra na posicao %i.", valor, i+1);
		}
	}
	return 0;
}
