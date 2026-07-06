#include<stdio.h>
int main(){
	int a[20],b[30],c[50],i,j,aux;
	
	printf("Entre com 20 elementos de uma matriz A:\n");
	for(i=0;i<20;++i){
		scanf("%d", &a[i]);
		c[i]=a[i];
	}
	
	printf("Entre com 30 elementos de uma matriz B:\n");
	for(i=0;i<30;++i){
		scanf("%d", &b[i]);
		c[i+20]=b[i];
	}
	
	for(i=0;i<50;++i){
		for(j=i+1;j<50;++j){
			if(c[j] < c[i]){
				aux=c[i];
				c[i]=c[j];
				c[j]=aux;
			}
		}
	}
	
	printf("\n50 elementos de uma matriz C:\n");
	for(i=0;i<50;++i){
		printf("%d\n",c[i]);
	}
	return 0;
}
