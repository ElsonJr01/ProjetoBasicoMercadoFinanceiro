#include <stdio.h>

int registraTransacao(float lista[],int posicao){
	float entrada;
	
	printf("    Qual valor voce quer registrar?\n    Valores positivos serao considerados receitas\n    e valores negativos serao considerados despesas.\n\n    ");
	scanf("%f",&entrada);
	
	if(entrada != 0){
		lista[posicao] = entrada;
	
		printf("    Transacao registrada\n");
		return 0;
	}else{
		printf("    Impossivel registrar valor nulo");
		return 1;
	}
}
