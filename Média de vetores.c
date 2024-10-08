#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal
void main(){
	//Adicionando acentos
	setlocale(LC_ALL,"");
	
	/*Crie um algoritmo que leia um número n(escolhido pelo usuário) de valores
	e defina a média entre eles*/
	
	//Definindo o número de valores
	int tam;
	
	printf("\nDigite o tamanho do vetor: ");
	scanf("%d", &tam);
	
	//Algoritmo para coletar e calcular os valores
	float vetor[tam], soma;
	int i;
	for(i = 0; i < tam; i++){
	printf("\nDigite um valor: ");
	scanf("%f", &vetor[i]);
	soma = soma + vetor[i];
	}

	//Impressão dos valores
	for(i = 0; i < tam; i++){
	printf("\nVetor[%d] = %.1f", i, vetor[i]);
	}
//Exibindo a média
printf("\n\nA media dos valores é: %.1f", soma/tam);

//Fim do programa
system("pause");
}
