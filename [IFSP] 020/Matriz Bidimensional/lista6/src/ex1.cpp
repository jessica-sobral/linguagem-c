#include<stdio.h>
int main(){
	int a[5][3],b[5][3],c[5][3],i,j;
	
	printf("Entre com 15 elementos de uma matriz A:\n");
	for(i=0;i<5;++i){
		for(j=0;j<3;++j){
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("\nEntre com 15 elementos de uma matriz B:\n");
	for(i=0;i<5;++i){
		for(j=0;j<3;++j){
			scanf("%d", &b[i][j]);
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("Entre com 15 elementos de uma matriz A:\n");
	for(i=0;i<5;++i){
		for(j=0;j<3;++j){
			printf("%d\n", c[i][j]);
		}
	}
	return 0;
}
