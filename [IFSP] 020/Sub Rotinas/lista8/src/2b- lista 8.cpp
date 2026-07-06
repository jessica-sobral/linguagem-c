#include<stdio.h>

	int i, a[30], b[30], c[60];

	int matra();
	int matra(){
	    printf("Entre com A:");
	    for(i=0;i<30;++i)
	    scanf ("%d", &a[i]);
}

	int matrb();
	int matrb(){
	    printf("Entre com B:");
	    for(i=0;i<30;++i)
	    scanf ("%d", &b[i]);
}

	int jun();
	int jun(int a[30], int b[30]){
	    for(i=0;i<60;++i)
	    if(i<30)
	    c[i]=a[i];
	    else 
	    c[i]=b[i-30];
}
	int ex();
		int ex(){
	    for(i=0;i<60;++i)
	    printf("%d\n", c[i]);
}

	int main(){
	    matra();
	    matrb();
	    jun(a, b);
	    ex();
	    
	return 0;
}
