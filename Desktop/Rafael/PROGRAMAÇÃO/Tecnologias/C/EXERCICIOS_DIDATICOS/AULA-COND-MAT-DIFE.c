#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
	setlocale(LC_ALL, "");
	printf("olá, mundo \n \n");

	//DEFININDO VARIAVEIS
	int a = 5, b = 10, c = 15;
	char d = 'x';
	//maior
	if(a > 2){
		printf("\n %d é maior que 2", a);
	}
	//menor ou igual
	if(c < b){
		printf("\n %d é menor ou igual à %d", c, b);
	}
	//menor
	if(a < 10){
		printf("\n %d é menor que 10", a);
	}
	//menor ou igual
	if(a <= 10){
		printf("\n %d é menor ou igual a 10", a);
	}
	//diferente
	if(c != 10){
		printf("\n %d é diferente de 10", c);
	}
	if(d != 'a'){
		printf("\n %c é diferente de a", d);
	}
	


printf("\n \n \n");
system("pause");
}
