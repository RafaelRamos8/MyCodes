#include <stdio.h>
#include <stdlib.h>

//Fun��o Principal do Programa
void main(){

//definindo variaveis
int a = 1, b = 10;

//contando at� 10
while(a <= 10){
	//imprimindo a na tela 
	printf("\n%d", a);
	
	//Incremento
	a++; //igual (a = a + 1)
	
}
//Contagem regressiva de 10 a 1
while(b >= 1){
	//imprimindo b
	printf("\n%d", b);
	
	//Decremento
	b--; //igual (b = b - 1)
}

//pausa o programa ap�s executar	
	Return 0;
	system("pause");
}
