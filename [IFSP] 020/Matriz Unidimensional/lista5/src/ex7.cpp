#include<stdio.h>
int main(){
	int a[20],b[20],i,j,aux,valor;
	
	printf("Entre com 20 elementos de uma matriz A:\n");
	for(i=0;i<20;++i){
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<20;++i){
		b[i]=a[i]+2;
	}
	
	for(i=0;i<20;++i){
		for(j=i+1;j<20;++j){
			if(b[j] < b[i]){
				aux=b[i];
				b[i]=b[j];
				b[j]=aux;
			}
		}
	}
	
	printf("\n20 elementos de uma matriz B:\n");
	for(i=0;i<20;++i){
		printf("%d\n", b[i]);
	}
	
	printf("Que valor de B tu quer pesquisar?\n");
	scanf("%d", &valor);
	for(i=0;i<20;++i){
		if(b[i]==valor){
			printf("\nO elemento %d se encontra na posicao %i.", valor, i+1);
		}
	}
}
