#include <stdio.h>
#include <stdlib.h>

int main (){
	float qntHamburguer, qntCheese, qntRefri, qntMilk = 0;
	float valor[5]=(3.50, 3.50, 5.00, 1.50, 2.80);
	float qndItem[5];
	float result = 0;
	
	printf("\t\t\tCardapio da Mona's Burguer ");
	
	printf("\n Quantidade de Hamburguer"); 
	scanf("%f", &qndItem[0]);
	result = valor[0]*qndItem[0];
	
	printf("\n Qantidade de CheeseBurguer");
	scanf("%f", &qndItem[1]);
	result = (valor[1]*qndItem[1]);
}
