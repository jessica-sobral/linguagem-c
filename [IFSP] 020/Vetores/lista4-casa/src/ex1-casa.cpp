#include<stdio.h>
int main(){
	int y[8],x[8],c[8],i;
	
	printf("Entre com RAC(com 9 digitos):\n");
	for(i=0;i<9;++i){
		scanf("%i", &x[i]);
	}
	y[0]=x[0];
	y[1]=x[1];
	y[2]=x[7];
	y[3]=x[6];
	y[4]=x[4];
	y[5]=x[5];
	y[6]=x[2];
	y[7]=x[3];
	y[8]=x[8];
		
	printf("RAC(com 9 digitos):");
	for(i=0;i<9;++i){
		printf("%i", y[i]);
	}
	return 0;
}
