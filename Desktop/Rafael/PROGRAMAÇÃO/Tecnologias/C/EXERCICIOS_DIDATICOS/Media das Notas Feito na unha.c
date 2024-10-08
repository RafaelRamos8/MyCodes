#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	//Para usar acentos
	setlocale(LC_ALL, "");
	//Variáveis
	float nota1, nota2, soma, media;
	printf("Digite o valor da nota 1 = ");
	scanf("%f", &nota1);
	printf("\n Agora... \n \n");
	printf("Digite o valor da nota 2 = ");
	scanf("%f", &nota2);
	soma = nota1 + nota2;
	media = soma / 2;
	printf ("\n \n A media das notas é = %.1f \n \n", media);
	system("pause");
	}
