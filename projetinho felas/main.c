#include <stdio.h>
#include "register.h"
#include "list.h"
#include "calc.h"

int main(){
	int qtdLimite, input,posicao=0;
	
	printf("Quantas transacoes voce vai querer fazer? ");
	scanf("%d",&qtdLimite);
	
	float transferencias[qtdLimite];
	
	printf("-----------Menu----------\n");
	printf("0-Parar execucao do programa\n");
	printf("1-Registrar Despesas e Receitas\n");
	printf("2-Listar Transacoes\n"); 
	printf("3-Listar Despesa Total\n");
	printf("4-Listar Receita Total\n"); 
	printf("5-Calcular Saldo Liquido \n");
	printf("-------------------------\n");
	printf("Digite seu comando:\n");
		
	scanf("%d",&input);
	
	while(input!=0 && (input <= 6 || input >=0)){
		switch(input){
			case 1:
				if(qtdLimite == posicao){
					printf("Limite de transacoes atingido.\n");
					break;
				}
				
				if(registraTransacao(transferencias,posicao)==0){
					posicao++;
				}
				break;
				
			case 2:
				listar(transferencias,posicao);
				break;
				
			case 3:
				listarDespesa(transferencias,posicao);
				break;
			
			case 4:
				listarReceita(transferencias,posicao);
				break;
			case 5:
				calcularSaldo(transferencias,posicao);
				break;
				
			default:
				printf("Ocorreu um erro!!");
				input = 0;
				break;
			
		}
		
		printf("\n\n-------------------------\n");
		printf("Digite seu comando:\n");
		
		scanf("%d",&input);
	}
}
