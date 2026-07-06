#include<stdio.h>
int main(){
	int a[4],b[4],c[4][2],i,j;
	
	printf("Entre com 4 elementos de uma matriz A:\n");
	for(i=0;i<4;++i){
		scanf("%d", &a[i]);
	}
	
	printf("\nEntre com 4 elementos de uma matriz B:\n");
	for(i=0;i<4;++i){
		scanf("%d", &b[i]);
		c[i][0]=a[i]*2;
		c[i][1]=b[i]-5;
	}
	
	printf("\n8 elementos de uma matriz C:\n");
	for(i=0;i<4;++i){
		for(j=0;j<2;++j){
			printf("%d\n", c[i][j]);
		}
	}
	return 0;
}
