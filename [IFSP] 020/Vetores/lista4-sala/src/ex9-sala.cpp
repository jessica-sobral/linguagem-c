#include<stdio.h>
int main(){
	int c;
	
	printf("Codigo de acesso ao seu curso:\n");
	scanf("%i", &c);
	
	switch(c){
		case 1:{
			printf("Engenharia!");
			break;
		}
		case 2:{
			printf("Edificacoes!");
			break;
		}
		case 3:{
			printf("Sistemas Eletricos!");
			break;
		}
		case 4:{
			printf("Turismo!");
			break;
		}
		case 5:{
			printf("Analise de Sistemas!");
			break;
		}
		default:{
			printf("Codigo invalido!");
			break;
		}
	}
	return 0;
}
