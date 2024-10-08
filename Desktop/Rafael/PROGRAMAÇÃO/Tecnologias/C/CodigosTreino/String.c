#include <stdio.h>
#include <stdlib.h>

int main(){
	//Definindo Strings de Várias Formas
	char palavra1[] = "boi";
	char palavra2[5] = "bala";//Deve-se acrescentar uma casa a mais reservada para o "\0" (encerramento da string)
	char palavra3[] = {'a', 'b', 'c', 'd', '\0'};
	char palavra[5] = {'f', 'o', 'n', 'e', '\0'};
	
	//Imprimindo String (Sem espaços)
	printf("%s \n", palavra1);
	
	//Lendo uma String (Sem espaços)
	printf("Digite uma palavra com ate 4 letras:\n");
	fflush(stdin);
	scanf("%s", palavra2);
	printf("\n%s\n", palavra2);
	
	//Lendo uma String (Com espaços)
	printf("\nAgora com espaco!\n");
	char fruta[255];
	fflush(stdin);
	printf("\nDigite o nome de uma fruta:");
	fgets(fruta, sizeof(fruta), stdin);
	
	//Imprimindo a fruta lida
	printf("Fruta lida:");
	puts(fruta);
	
	return 0;
	
}

/*Explicação:

Primeiro mostro formas de definir String pré-determinadas.
Depois mostro como imprimir quando não tem espaços.

Não esqueça de SEMPRE limpar o buffer do teclado antes
de ler uma nova String como "fflush(stdin);"

A função "fgets" é usada para ler strings usando espaços
e "puts" imprime strings com espaços.
*/
