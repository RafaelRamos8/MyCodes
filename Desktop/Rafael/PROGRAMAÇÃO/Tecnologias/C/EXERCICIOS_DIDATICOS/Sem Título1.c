#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	//Permite usar acentos
	setlocale (LC_ALL, "");
	
	//Ol� com acento
	printf("Ol� \n");
	
	// Como utilizar sa�da e vari�veis e utilizar a soma
	int a = 5;
	int b = 6;
	
	printf("o valor de 'a' � %d", a);
	printf("\n valor de 'b' � %d", b);
	
	printf("\n o valor da soma de 'a' e 'b' � = %d \n", a + b);
	
	//Agora praticar a entrada de dados e variaveis
	float c = 0;
	
	printf("Digite o valor de 'c' = ");
	scanf("%f", &c);
	
	printf("\n A soma de A+C � = %f \n", a + c);
	printf("A soma de B+C � = %f \n", b + c);
	printf("A soma de A+B+C � = %f \n", a + b + c);
	
	//ENTRADA DE CHARACTERS
	
	char d = "";
	
	printf("digite o texto: \n");
	fflush(stdin);
	scanf("%s", &d);
	
	printf("Voc� digitou o texto a seguir: %s", d);
	
}
