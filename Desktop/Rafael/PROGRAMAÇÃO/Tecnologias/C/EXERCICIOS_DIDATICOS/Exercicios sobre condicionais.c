#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
	setlocale(LC_ALL, "");
	
	int num1, num2, result;
	//Atribuindo Valores.
	printf("Olá, esse é o programa de estudo sobre condicionais. \n \n");
	printf("Digite um número: ");
	scanf("%d", &num1);
	
	printf("\n \n \n");
	
	printf("Digite outro número: ");
	scanf("%d", &num2);
	
	//Funções do Programa.
	if(num1 % 2 == 1){
		printf("O primeiro número é ímpar");
	} else{
		printf("O primeiro número é par");
	}
	
	if(num2 % 2 == 1){
		printf("\n O primeiro número é ímpar \n \n");
	} else{
		printf("\n O segundo número é par \n \n");
	}
	
	if(num1 % 2 == 1, num2 % 2 == 1){
		printf(" \n A soma dos número é: %d", num1 + num2);
	}else{
		printf(" \n A multiplicação dos números é: %d", num1 * num2);
	}
	
	//Fim do Programa
	printf("\n \n \n");
	system("pause");
	
}
