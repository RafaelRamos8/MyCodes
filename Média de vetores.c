#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun��o principal
void main(){
	//Adicionando acentos
	setlocale(LC_ALL,"");
	
	/*Crie um algoritmo que leia um n�mero n(escolhido pelo usu�rio) de valores
	e defina a m�dia entre eles*/
	
	//Definindo o n�mero de valores
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

	//Impress�o dos valores
	for(i = 0; i < tam; i++){
	printf("\nVetor[%d] = %.1f", i, vetor[i]);
	}
//Exibindo a m�dia
printf("\n\nA media dos valores �: %.1f", soma/tam);

//Fim do programa
system("pause");
}
