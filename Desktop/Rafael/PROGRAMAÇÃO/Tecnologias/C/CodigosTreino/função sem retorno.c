#include <stdio.h>
#include <stdlib.h>

//fun��o vazia e sem retorno
void desenhaBorda(){
	printf("|----------|\n");
}

int main(){
	
	desenhaBorda(); //chamando a fun��o
	printf("hi!\n");
	desenhaBorda();
	return 0;
}
