#include <stdio.h>
#include <stdlib.h>

int main(){


int valorA, valorB, valorC =0;
	printf("Digite valor de A\n\t\t");
	scanf("%d", &valorA);
	
	printf("Digite valor de B\n\t\t");
	scanf("%d", &valorB);
	
	printf("Digite valor de C\n\t\t");
	scanf("%d", &valorC);
	
	if (valorA + valorB > valorC) {
		printf("\n\t\t A soma de A+B é maior que C\n");
		
	}else if(valorA + valorB < valorC){
		printf("\n\t\t A soma de A+B é menor que C\n");
		
	}else {
		printf("\n\t\t O valor de A+B é igual a C\n");
	}
	
	system("pause");
	}