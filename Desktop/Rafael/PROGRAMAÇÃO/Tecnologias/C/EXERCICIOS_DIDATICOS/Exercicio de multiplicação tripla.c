#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL, "");
	
	//Crie um algoritmo que leia 3 n�meros inteiros de uma s� vez.
	//Coloque o resultado da multiplica��o entre os 3 em uma vari�vel s�.
	//Depois exiba essa vari�vel.
	
	int valor1, valor2, valor3, result;
	
	printf("Digite os 3 valores da multiplica��o: \n");
	scanf("%d %d %d", &valor1, &valor2, &valor3);
	
	result = valor1 * valor2 * valor3;
	
	printf("\n O resultado da multiplica��o �: %d \n \n \n", result);
	
	system("pause");
}
