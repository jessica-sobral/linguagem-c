#include<stdio.h>

	int a[12], b[12], i, j, aux;
	
	int leta(){
		for(i=0;i<12;i++){
	   	    printf("\nEntre com os valores do vetor A:\n ");
	        scanf("%d", &a[i]);
		}
	        
	    for(i=0;i<12;i++){
	        for(j=i+1;j<12;j++){
	        	if (a[i]>a[j]){
		           aux= a[i];
		           a[i]= a[j];
		           a[j]= aux;
	        	}
	        }
	    }
	}


	int letb(){
		for(i=0;i<12;i++){
			printf("\nEntre com os valores do vetor B:\n");
		    scanf("%d", &b[i]);
		}
		
	    for(i=0;i<12;i++){
		    for(j=i+1;j<12;j++){
				if (b[i]>b[j]){
			       aux= b[i];
			       b[i]= b[j];
			       b[j]= aux;
			    }  
			}
		}
	}


	int soma();
	int soma(int a[12], int b[12]){
		int c[12];
		for(i=0;i<12;i++){
			c[i]=a[i]+b[i];
		}
	    
	    for(i=0;i<12;i++){
		    for(j=i+1;j<12;j++){
			    if (c[i]>c[j]){
			       aux= c[i];
			       c[i]= c[j];
			       c[j]= aux;
				}
			}
		}
	    for(i=0;i<12;i++){
	    	printf("%d + %d = %d\n",a[i], b[i], c[i]);
		}
	}

	int main(){
		leta();
		letb();
		soma(a, b);
		
    return 0;
}
