#include <stdio.h>
#define MAX 50

int main()
{
	// exemplo de um n�mero em decimal
	int num = 0;
	printf("digite um n�mero decimal: %d", num);
	scanf("%d", &num);
	// vetor de MAX posi��es para guardar o n�mero em bin�rio
	int vet_bin[MAX];
	// vari�veis de controle de loop
	int i = 0, j;
	// aux_num serve para guardar num para mostrar posteriormente
	int aux_num = num;

	/*
		Para converter um n�mero decimal em bin�rio basta dividir
		sucessivamente o n�mero decimal por 2 guardando o resto
		da divis�o.
		Exemplo: 8
		resto de 8 por 2 = 0
		8 / 2 = 4
		resto de 4 por 2 = 0
		4 / 2 = 2
		resto de 2 por 2 = 0
		2 / 2 = 1
		resto de 1 por 2 = 1
		1 / 2 = 0
		FIM
		Por �ltimo � s� pegar do �ltimo resto pro primeiro
		8 em bin�rio � 1000
	*/

	// enquanto "num" for maior que 0
	while(num > 0)
	{
		// obt�m o resto da divis�o de num por 2
		vet_bin[i] = num % 2;
		i++;
		num = num / 2;
	}

	printf("%d em binario: ", aux_num);

	// percorre o vetor para mostrar o n�mero em bin�rio
	for(j = i - 1; j >= 0; j--)
		printf("%d", vet_bin[j]);
	printf("\n");

	return 0;
}
