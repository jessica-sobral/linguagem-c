#include<stdio.h>
int main(){
	int a[10],b[10][3],i,j,fat;
	
	printf("Entre com 10 elementos de uma matriz A:\n");
	for(i=0;i<10;++i){
		scanf("%d", &a[i]);
		b[i][0]=a[i]+5;
		b[i][2]=a[i]*2;
	}
	
	fat=1;
	for(j=0;j<10;++j){
		b[j][1]=1;
		for(i=1;i<=a[j];++i){
			b[j][1]*=i;
		}
	}
	
	printf("\n30 elementos de uma matriz B:\n");
	for(i=0;i<10;++i){
		for(j=0;j<3;++j){
			printf("%d\n", b[i][j]);
		}
	}
	return 0;
}
