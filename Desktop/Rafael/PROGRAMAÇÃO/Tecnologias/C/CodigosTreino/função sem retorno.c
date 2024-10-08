#include <stdio.h>
#include <stdlib.h>

//função vazia e sem retorno
void desenhaBorda(){
	printf("|----------|\n");
}

int main(){
	
	desenhaBorda(); //chamando a função
	printf("hi!\n");
	desenhaBorda();
	return 0;
}
