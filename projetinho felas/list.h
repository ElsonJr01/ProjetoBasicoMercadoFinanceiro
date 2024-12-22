#include <stdio.h>

void listar(float lista[],int posicao){
	int i;
	if(posicao == 0){
		printf("Nenhuma transacao foi executada.");
	}
	
	else{
		printf("-------------------------\n");
		printf("----Transacoes Feitas----\n");
        printf("-------------------------\n");
        
		for(i = 0; posicao > i; i++ ){
			printf("%i. ",i + 1);
			
			if( lista[i] > 0){
				printf("    Receita: %0.2f\n",lista[i]);
			}else{
				printf("    Despesa: %0.2f\n",lista[i]);
			}
		}
	}
}
