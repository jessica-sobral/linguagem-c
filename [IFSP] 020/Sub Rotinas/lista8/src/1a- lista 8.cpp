#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int controle=0, qtd_registros=0, controlea, controleb;
	char opcao, pesq[45];
	
	struct cadastro{
		char nome[45];
		char endereco[50];
		char email[30];
		char telefone[11];
	}pessoas[5], aux;
	
	do{
		printf("\nAGENDA\n");
		printf("\na- Cadastro das informações: nome, endereço, e-mail e telefone. \nb- Pesquisa dos nomes. \nc- Classificação por ordem alfabética. \nd- Alteração de algum registro que tenha sido fornecido com erro. \ne- Remoção de elementos cadastrados. \nf- Sair.\n ");
		printf("\nQual sua opção?");
		fflush(stdin);
		scanf("%c", &opcao);
		
		switch(opcao){
			case 'a': do{
				if(qtd_registros==5){
					printf("\nLimite de 5 registros!");
					break;
				}
				printf("\nNome:");
				fflush(stdin);
				fgets(pessoas[qtd_registros].nome,45,stdin);
				
				printf("\nEndereço:");
				fflush(stdin);
				fgets(pessoas[qtd_registros].endereco,50,stdin);
				
				printf("\nE-mail:");
				fflush(stdin);
				fgets(pessoas[qtd_registros].email,30,stdin);
				
				printf("\nTelefone:");
				fflush(stdin);
				fgets(pessoas[qtd_registros].telefone,11,stdin);
				
				++qtd_registros;
				
				printf("\nDeseja adicionar mais um registro? \n1- Sim. \n2- Não.");
				fflush(stdin);
				scanf("\n%d", &controlea);
			}while(controlea==1);
				break;
				
			case 'b': controleb=0;
					printf("\nQuem está procurando? (Digite o nome)");
					fflush(stdin);
					fgets(pesq,45,stdin);
					for(int i=0;i<qtd_registros;++i){
						if(strcmp(pesq, pessoas[i].nome)==0){
							controleb=1;
							puts(pessoas[i].nome);
							puts(pessoas[i].endereco);
							puts(pessoas[i].email);
							puts(pessoas[i].telefone);
						}
					}
					if(controleb==0)
					printf("\nNome inválido!");
				break;
				
			case 'c': for(int i=0;i<qtd_registros-1;++i){
						for(int j=i+1;j<qtd_registros;++j){
							if(strcmp(pessoas[i].nome, pessoas[j].nome)<0){
								aux=pessoas[i];
								pessoas[i]=pessoas[j];
								pessoas[j]=aux;
								}
							}
						}
						for(int i=0;i<qtd_registros;++i){
							puts(pessoas[i].nome);
						}
				break;
				
			case 'd': controleb=0;
					printf("\nQuem seja alterar? (Digite o nome)");
					fflush(stdin);
					fgets(pesq,45,stdin);
					for(int i=0;i<qtd_registros;++i){
						if(strcmp(pesq, pessoas[i].nome)==0){
							controleb=1;
							
							printf("\nNome:");
							fflush(stdin);
							fgets(pessoas[i].nome,45,stdin);
							
							printf("\nEndereço:");
							fflush(stdin);
							fgets(pessoas[i].endereco,50,stdin);
							
							printf("\nE-mail:");
							fflush(stdin);
							fgets(pessoas[i].email,30,stdin);
							
							printf("\nTelefone:");
							fflush(stdin);
							fgets(pessoas[i].telefone,11,stdin);
						}
					}
					if(controleb==0)
					printf("\nNome inválido!");
				break;
				
			case 'e': controleb=0;
					printf("\nQuem deseja remover? (Digite o nome)");
					fflush(stdin);
					fgets(pesq,45,stdin);
					for(int i=0;i<qtd_registros;++i){
						if(strcmp(pesq, pessoas[i].nome)==0){
							controleb=1;
							for(int j=i;j<qtd_registros-1;++j){
								pessoas[j]=pessoas[j+1];
							}
							--qtd_registros;
						}
					}
					if(controleb==0)
					printf("\nNome inválido!");
				break;
				
			case 'f': controle=1;
				break;
			
			default: printf("\nOpção inválida!\n");
		}
	} while(controle==0);
	return 0;
}
