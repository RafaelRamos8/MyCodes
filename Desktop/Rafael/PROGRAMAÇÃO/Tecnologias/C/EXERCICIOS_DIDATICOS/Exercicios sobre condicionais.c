#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
	setlocale(LC_ALL, "");
	
	int num1, num2, result;
	//Atribuindo Valores.
	printf("Ol�, esse � o programa de estudo sobre condicionais. \n \n");
	printf("Digite um n�mero: ");
	scanf("%d", &num1);
	
	printf("\n \n \n");
	
	printf("Digite outro n�mero: ");
	scanf("%d", &num2);
	
	//Fun��es do Programa.
	if(num1 % 2 == 1){
		printf("O primeiro n�mero � �mpar");
	} else{
		printf("O primeiro n�mero � par");
	}
	
	if(num2 % 2 == 1){
		printf("\n O primeiro n�mero � �mpar \n \n");
	} else{
		printf("\n O segundo n�mero � par \n \n");
	}
	
	if(num1 % 2 == 1, num2 % 2 == 1){
		printf(" \n A soma dos n�mero �: %d", num1 + num2);
	}else{
		printf(" \n A multiplica��o dos n�meros �: %d", num1 * num2);
	}
	
	//Fim do Programa
	printf("\n \n \n");
	system("pause");
	
}
