#include<stdio.h>
int main(){
	int ra[9],rn[9],i;
	
	printf("Entre com o RA(9 digitos):\n");
	for(i=0;i<9;++i){
		scanf("%i", &ra[i]);
	}
	rn[0]=ra[1];
	rn[1]=ra[0];
	rn[2]=ra[2];
	rn[3]=ra[3];
	rn[4]=ra[4];
	rn[5]=ra[5];
	rn[6]=ra[6];
	rn[7]=ra[8];
	rn[8]=ra[7];
	
	printf("Novo RA(9 digitos):\n");
	for(i=0;i<9;++i){
		printf("%i", rn[i]);
	}
	return 0;
}
