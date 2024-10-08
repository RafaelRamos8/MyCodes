#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprimeVetor(int *vetor, int tam){
	int i;
	for(i=0; i < tam; i++){
		printf("%d \n", vetor[i]);
	}
}

void modificaVetor(int *vetor, int tam){
	int i;
	for(i=0; i < tam; i++){
		vetor[i] = vetor[i] + 3;
	}
}

int main(){
	setlocale(LC_ALL, "");
		
	int vetor[3] = {1,2,3};
	
	imprimeVetor(vetor, 3);
	
	modificaVetor(vetor, 3);
	
	imprimeVetor(vetor, 3);
	
	return 0;
}
