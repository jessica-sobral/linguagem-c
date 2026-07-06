#include<stdio.h>
int main(){
	int a[7],b[7],c[7][2],i,j;
	
	printf("Entre com 7 elementos de uma matriz A:\n");
	for(i=0;i<7;++i){
		scanf("%d", &a[i]);
	}
	
	printf("\nEntre com 7 elementos de uma matriz B:\n");
	for(i=0;i<7;++i){
		scanf("%d", &b[i]);
	}
	
	for(i=0;i<7;++i){
		c[i][0]=a[i];
		c[i][1]=b[i];
	}
	
	printf("\n14 elementos de uma matriz C:\n");
	for(i=0;i<7;++i){
		for(j=0;j<2;++j){
			printf("%d\n", c[i][j]);
		}
	}
	return 0;
}
