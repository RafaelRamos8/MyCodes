#include <stdio.h>
#include <stdlib.h>

int main(){
	//Definindo Strings de V�rias Formas
	char palavra1[] = "boi";
	char palavra2[5] = "bala";//Deve-se acrescentar uma casa a mais reservada para o "\0" (encerramento da string)
	char palavra3[] = {'a', 'b', 'c', 'd', '\0'};
	char palavra[5] = {'f', 'o', 'n', 'e', '\0'};
	
	//Imprimindo String (Sem espa�os)
	printf("%s \n", palavra1);
	
	//Lendo uma String (Sem espa�os)
	printf("Digite uma palavra com ate 4 letras:\n");
	fflush(stdin);
	scanf("%s", palavra2);
	printf("\n%s\n", palavra2);
	
	//Lendo uma String (Com espa�os)
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

/*Explica��o:

Primeiro mostro formas de definir String pr�-determinadas.
Depois mostro como imprimir quando n�o tem espa�os.

N�o esque�a de SEMPRE limpar o buffer do teclado antes
de ler uma nova String como "fflush(stdin);"

A fun��o "fgets" � usada para ler strings usando espa�os
e "puts" imprime strings com espa�os.
*/
