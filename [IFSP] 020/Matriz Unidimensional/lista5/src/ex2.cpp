#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[8],b[8],i,j,aux,valor;
	
	printf("Entre com 8 elementos de uma matriz A:\n");
	for(i=0;i<8;++i){
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<8;++i){
		b[i]=a[i]*5;
	}
	
	for(i=0;i<7;++i){
		for(j=i+1;j<8;++j){
			if(b[j] < b[i]){
				aux=b[i];
				b[i]=b[j];
				b[j]=aux;
			}
		}
	}
	
	printf("Elementos de uma matriz B:\n");
	for(i=0;i<8;++i){
		printf("%d\n", b[i]);
	}
	
	printf("Que valor de B tu quer pesquisar?\n");
	scanf("%d", &valor);
	for(i=1;i<8;++i){
		if(b[i]==valor){
			printf("O elemento %d se encontra na posicao %i.", valor, i+1);
		}
	}
	return 0;
}
