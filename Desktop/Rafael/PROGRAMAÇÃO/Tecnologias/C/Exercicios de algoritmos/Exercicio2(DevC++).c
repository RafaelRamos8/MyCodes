#include <stdio.h>
#include <stdlib.h>

int main(){
	int valorA, valorB, valorC = 0;
	
	printf("\n\t Digite valor de A");
	scanf("\n%d", &valorA);
	
	printf("\n\t Digite valor de B");
	scanf("\n%d", &valorB);
	
	printf("\n\t Digite valor de C");
	scanf("\n%d", &valorC);
	
	if (valorA == valorB)
	{
		valorC = valorA + valorB;
	}
	
	else if (valorA > valorB)
	{
			valorC = valorA * valorB;
	}
	
	else
	{
		valorC = valorB * valorA;
	}
	
	printf("O valor de c é: %d \n", c);
	
	system("pause");
}
