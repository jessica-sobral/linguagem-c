#include<stdio.h>
int main(){
	int a[12],i,j,aux;
	
	printf("Entre com 12 elementos:\n");
	for(i=0;i<12;++i){
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<11;++i){
		for(j=i+1;j<12;++j){
			if(a[j] > a[i]){
				aux=a[i];
				a[i]=a[j];
				a[j]=aux;
			}
		}
	}
	
	printf("Elementos ordenados:\n");
	for(i=0;i<12;++i){
		printf("%d\n", a[i]);
	}
	return 0;
}
