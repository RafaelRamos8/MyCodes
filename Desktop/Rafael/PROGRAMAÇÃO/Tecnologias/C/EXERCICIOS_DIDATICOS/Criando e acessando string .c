#include <stdio.h>
#include <stdlib.h>

//Função Principal do programa
void main(){
	
	//Variaveis
	
	char palavra[255];
	
	//Instrução
	printf("Digite uma palavra: ");
	
	//Limpar o buffer
	setbuf(stdin, 0);
	
	//Leia a string
	fgets(palavra, 255, stdin);
	
	//Limpa as casas não utilizaveis
	palavra[stdlen(palavra)-1]= '\0';
	
	printf("\n%s", palavra);
	
	Return 0;
	
	printf("\n\n\n");
	system("pause");
}
