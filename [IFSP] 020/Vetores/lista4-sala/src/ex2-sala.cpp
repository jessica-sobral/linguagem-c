#include<stdio.h>
int main(){
	int a[6],b[6],i,l;
	
	printf("Entre com 6 elementos de uma matriz A:\n");
	for(i=0;i<6;++i){
		scanf("%i", &a[i]);
		b[i]=1;
		for(l=1;l<=a[i];++l)
			b[i]*=l;
	}
	
	printf("6 elementos de uma matriz B:\n");
	for(i=0;i<6;++i){
		printf("%i\n", b[i]);
	}
	return 0;
}
