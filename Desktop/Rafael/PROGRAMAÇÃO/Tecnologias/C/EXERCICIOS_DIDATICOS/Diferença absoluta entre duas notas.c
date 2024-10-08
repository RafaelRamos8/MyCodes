#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal
void main (){
	//Adicionando linguagem local
	setlocale(LC_ALL, "");
	//Crie um algoritmo que leia 2 notas e mostre a diferença absoluta entre elas.
	int nota1, nota2, resultado, result;
	//Adicionando os valores de Nota1 e Nota2.
	printf("Digite o valor da primeira nota = ");
	scanf("%d", &nota1);
	printf("\n \n Agora ... \n \n");
	printf("Digite o valor da segunda nota =");
	scanf("%d", &nota2);
	//Tirando a diferença entre nota1 e nota2 e colocando em valor absoluto.
	resultado = nota1 - nota2;
	result = abs(resultado);
	
	printf("resultado da diferença absoluta da primeira nota e da segunda nota é = %d \n", result);
	
	system("pause");
	
}
