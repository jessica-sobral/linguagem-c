#include<stdio.h>
int main(){
	int nota[40],i,j,aux,valor;
	
	printf("Entre com as notas de 40 alunos:\n");
	for(i=0;i<40;++i){
		scanf("%d", &nota[i]);
	}
	
	for(i=0;i<40;++i){
		for(j=i+1;j<40;++j){
			if(nota[j] < nota[i]){
				aux=nota[i];
				nota[i]=nota[j];
				nota[j]=aux;
			}
		}
	}
	
	printf("\nNotas ordenadas em ordem crescente:\n");
	for(i=0;i<40;++i){
		printf("%d\n", nota[i]);
	}
	
	printf("Qual nota tu quer pesquisar?\n");
	scanf("%d", &valor);
	for(i=0;i<40;++i){
		if(nota[i]==valor){
			printf("\nA nota %d se encontra na posicao %i.", valor, i+1);
		}
	}
	return 0;
}
