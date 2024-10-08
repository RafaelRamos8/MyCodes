#include <stdio.h>
#include <stdlib.h>

//função principal do programa
int main(){
	
	//declarando variaveis
	int vetor[3], i, valor;
	
	//Definindo os valores
	vetor[0] = 1;
	vetor[1] = 2;
	vetor[2] = 3; 
	vetor[3] = 4;
	
	//imprimindo na tela 
	
	
	for(i = 0; i < 3; i++){
		printf("\n o valor do vetor %d e %d",vetor[i], vetor[i]);
	}
	
	//fim do programa
	return 0;
}
