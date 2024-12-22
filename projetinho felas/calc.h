#include <stdio.h>

void listarDespesa(float lista[],int posicao){
	
	int j; 
	float somaDes=0;
	
	if(posicao==0){
		printf("    Nao possui despesa");
		
	}else{
		for(j=0; posicao>j; j++){
			if(lista[j]<0){
				somaDes += lista[j];
				printf("    Despesa %d: %.2f\n", j+1, lista[j]);
			}
		}
	}
	printf("\n    Valor total das despesas: %.2f", somaDes);
}

void listarReceita(float lista[], int posicao){
    int i; 
    float soma = 0.0;
    
    if (posicao == 0){
        printf("    Nao possui receita."); 
    }
    else {
        for(i = 0; posicao>i; i++){
            if(lista[i] > 0){
                printf("    Receita %i: %0.2f\n",i+1, lista[i]);
                soma += lista[i];
            }
        }
        printf("    Soma das receitas: %0.2f\n", soma);
    }     
}

void calcularSaldo(float lista[],int posicao){
	int i, j;
	float somaRec = 0.0, somaDes = 0.0;
	
	if (posicao == 0){
		somaDes = 0.0;
    }
	else{
		for(j=0; posicao>j; j++){
			if(lista[j]<0){
				somaDes += lista[j];
			}
		}
	}
	if (posicao == 0){
		somaRec = 0.0;
    }
    else{
        for(i = 0; posicao>i; i++){
            if(lista[i] > 0){
                somaRec += lista[i];
            }
        }
    }
    printf("    Saldo liquido: %0.2f\n", somaRec+somaDes);
}
