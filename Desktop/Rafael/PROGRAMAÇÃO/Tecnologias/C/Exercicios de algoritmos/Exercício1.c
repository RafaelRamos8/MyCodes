#include <stdio.h>
#include <stdlib.h>

int main (){
	float qntHamburguer, qntCheese, qntBatataFrita, qntRefri, qntMilk = 0;
	float valor[5] = {3.50, 4.50, 5.00, 1.50, 2.80};
	float qntItem[5];
	float result = 0;
	
	printf("\t\t\tCardapio da Mona's Podrão  \n\n");
	
	printf("\n Quantidade de Hamburguer\n\t\t"); 
	scanf("%f", &qntItem[0]);
	result = valor[0]*qntItem[0];
	
	printf("\n Quantidade de CheeseBurguer\n\t\t");
	scanf("%f", &qntItem[1]);
	result = (valor[1]*qntItem[1]) + result;
	printf("soma final é %.2f ", result);
	
	printf("\n Quantidade de Batata Frita\n\t\t");
	scanf("%f", &qntItem[2]);
	result = (valor[2]*qntItem[2]) + result;
	printf("soma final é %.2f ", result);
	
	printf("\n Quantidade de Refrigerante\n\t\t");
	scanf("%f", &qntItem[3]);
	result = (valor[3]*qntItem[3]) + result;
	printf("soma final é %.2f ", result);
	
	printf("\n Quantidade de Milkshake\n\t\t");
	scanf("%f", &qntItem[4]);
	result = (valor[4]*qntItem[4]) + result;
	printf("soma final é %.2f ", result);
	
	printf("\n\n\t\tO valor total da sua compra é de: R$%.2f\n", result);
	
	system("pause");
}
