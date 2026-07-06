#include<stdio.h>
int main(){
	int ra[9],rn[9],i;
	
	printf("Entre com o RA(9 digitos):\n");
	for(i=0;i<9;++i){
		scanf("%i", &ra[i]);
	}
	for(i=0;i<5;++i){
		rn[i]=ra[i];
	}
	for(i=0;i<5;++i){
		rn[i+5]=ra[8-i];
	}
	
	printf("Novo RA(9 digitos):\n");
	for(i=0;i<9;++i){
		printf("%i", rn[i]);
	}
	return 0;
}
