#include<stdio.h>
int main(){
	int a[12],b[12],c[12],i,j,aux;
	
	printf("Entre com 12 elementos de uma matriz A:\n");
	for(i=0;i<12;++i){
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<12;++i){
		for(j=i+1;j<12;++j){
			if(a[j] > a[i]){
				aux=a[i];
				a[i]=a[j];
				a[j]=aux;
			}
		}
	}
	
	printf("\nEntre com 12 elementos de uma matriz B:\n");
	for(i=0;i<12;++i){
		scanf("%d", &b[i]);
	}
	
	for(i=0;i<12;++i){
		for(j=i+1;j<12;++j){
			if(b[j] > b[i]){
				aux=b[i];
				b[i]=b[j];
				b[j]=aux;
			}
		}
	}
	
	for(i=0;i<12;++i){
		c[i]=a[i]+b[i];
	}
	
	for(i=0;i<12;++i){
		for(j=i+1;j<12;++j){
			if(c[j] < c[i]){
				aux=c[i];
				c[i]=c[j];
				c[j]=aux;
			}
		}
	}
	
	printf("\n12 elementos de uma matriz C:\n");
	for(i=0;i<12;++i){
		printf("%d\n", c[i]);
	}
	return 0;
}
