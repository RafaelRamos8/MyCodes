#include <stdio.h>
#include <stdlib.h>

int retornaSucessor(int number){
	printf("\no sucessor de %d eh %d\n", number, number +1);
}

int retornaAntecessor(int number){
	printf("\no antecessor de %d eh %d\n", number, number -1);
}

int main(){
	
	int valor;
	printf("Digite um numero: ");
	scanf("%d", &valor);
	
	system("CLS");
	retornaSucessor(valor);
	retornaAntecessor(valor);
	
	return 0;
}
