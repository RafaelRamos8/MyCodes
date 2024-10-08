#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	char texto[255];
	
	printf("Digite um texto: \n");
	fgets(texto, sizeof(texto), stdin);
	
	printf("Você digitou: %s\n", texto);

}
