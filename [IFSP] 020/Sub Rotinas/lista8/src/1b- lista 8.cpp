#include <stdio.h>
#include <string.h>
#include <locale.h>
	
	int i, j, k, op, soma[20];
	float med[20];
	
	struct cad{
		char nome[60];
		int nota[4];
	};
	struct cad x[20], aux;
	
	        int cadastro(){
	        	printf("\nCADASTRO\n");
		 		for(i=0;i<20;++i){
		            printf("\nNome:");
		            fflush(stdin);
			        fgets(x[i].nome,60,stdin);
			        printf("\nNota:");
			        scanf("%d", &x[i].nota[k]);
				}
	        }
	            
	        int exibir(){
			  	printf("\nREGISTROS\n");
				for(i=0;i<20;++i){
			   		printf("\nNome:"); puts(x[i].nome);	
		            for(k=0;k<4;++k){		
				   		printf("\nNota: %i\n", x[i].nota[k]);
				   	}
			   	}
		    }
	            
	        int classificacao(){
	        	printf("\nCLASSIFICAÇÃO\n");
		        for(i=0;i<20;++i){
		        	for(j=i+1;j<20;++j){
		        		if(strcmp(x[i].nome, x[j].nome)>0){
			 	         	aux=x[i];
			 	        	x[i]=x[j];
			 	        	x[j]=aux;
		         		}   
					}
				}
			        exibir();
		    }
		    
	        int alteracao(){
	        	printf("\nALTERAÇÃO\n");
				char nom[60];
			   	int acha;
	            printf("\nQual registro deseja alterar? (Digite o nome)\n");
	     	    fflush(stdin);
	            fgets(nom,60,stdin);
	        
		        i=0;
		        acha=0;    
		        while ((i<20)&&(acha==0)){
	        		if(strcmp(nom,x[i].nome)==0) 
			            acha=1;
			            else ++i;
	        	}
	            	if(acha==1){
			            printf("\nNome:");
			            fflush(stdin);
			            fgets(x[i].nome,60,stdin);
			            for(k=0;k<4;++k){
				            printf("\nNota:");
				            scanf("%d", &x[i].nota[k]);
						}
	                }
	        	else printf ("\nNome inválido!\n");
	           }
	           
	        int pesquisa(){
				char nom[60];
	        	fflush(stdin);
				int acha;
	            printf("\nQuem está procurando? (Digite o nome)\n");
	     	    fflush(stdin);
	            fgets(nom,60,stdin);
	        
		        i=0;
		        acha=0;     
		        while ((i<20)&&(acha==0)){
	        		if(strcmp(nom,x[i].nome)==0) 
		            acha=1;
		            else ++i;
	        	}
	
	            if(acha==1){
				   	printf("\nNome:");
					   puts(x[i].nome);	
		            for(k=0;k<4;++k)		
				   	printf("\nNotas: %i\n", x[i].nota[k]);
		        }
		        else printf ("\nNome inválido!");
	        }
	          
	        int media(){
				int soma;
	           	for(i=0;i<20;++i){
	            	soma=0;
		           	for(k=0;k<4;++k){
		           		soma=(soma+x[i].nota[k]);
		           	}
			   	med[i]=soma/4;
	           	}
	        }
	            
	        int listaa(){  
	            media();
	            for(i=0;i<20;++i)
	            if (med[i]>6){
				   	printf("\nNome:"); puts(x[i].nome);
		            printf("\nMédia: %6.2f", med[i]);
				}
			}
	          	
	        int listar(){   
	            media();
	            for(i=0;i<20;++i)
	            if (med[i]<7){
				   	printf("\nNome:"); puts(x[i].nome);
		            printf("\nMédia: %6.2f", med[i]); printf("\n");
	        	}
			}
			
	int main(){
		setlocale(LC_ALL, "Portuguese");
		do{ 
			printf("\nNOTAS BIMESTRAIS\n");
		    printf("\n1- Cadastro. \n2- Classificacao. \n3- Alteracao de Resgistro. \n4- Pesquisa. \n5- Alunos Aprovados. \n6- Alunos Reprovados. \n7- Sair.\n");
		    printf("\nQual sua opção?");
			scanf("%d", &op);
		 		switch (op){
			     	case 1: cadastro();break;
			     	case 2: classificacao();break;
			     	case 3: alteracao();break;
			     	case 4: pesquisa();break;
			     	case 5: listaa();break;
			     	case 6: listar();break;
	    		}
		}while (op<7); 
	return 0;
}
