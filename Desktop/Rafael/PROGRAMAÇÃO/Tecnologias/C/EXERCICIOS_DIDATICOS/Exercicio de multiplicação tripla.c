#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL, "");
	
	//Crie um algoritmo que leia 3 números inteiros de uma só vez.
	//Coloque o resultado da multiplicação entre os 3 em uma variável só.
	//Depois exiba essa variável.
	
	int valor1, valor2, valor3, result;
	
	printf("Digite os 3 valores da multiplicação: \n");
	scanf("%d %d %d", &valor1, &valor2, &valor3);
	
	result = valor1 * valor2 * valor3;
	
	printf("\n O resultado da multiplicação é: %d \n \n \n", result);
	
	system("pause");
}
