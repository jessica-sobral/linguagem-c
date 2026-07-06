#include<stdio.h>

	int fib(int n){
		int a,b,c;
		printf("FIBONACCI\n");
		printf("1");
	
	a=0;
	for (b=1;b<=(n-2);b){
		c=b;
		b=b+a;
		a=c;
		printf("\n%d",b);
	}
}

	int main(){
		int n;
		printf("\nDigite o numero de dois termos:");
		scanf("%d", &n);
	
		fib(n);
	
	return 0;
}
