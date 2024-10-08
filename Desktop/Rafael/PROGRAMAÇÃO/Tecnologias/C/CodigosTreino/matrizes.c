#include <stdio.h>
#include <stdlib.h>

//Definindo Constantes
#define LINHA 2
#define COLUNA 3

//Imprimindo matrizes

int main(){
	int matriz[LINHA][COLUNA] = {{1,2,3}, {4,5,6}};
	int i,j;
	for(i = 0; i < LINHA; i++){
		for(j = 0; j < COLUNA; j++){
			printf("%d", matriz[i][j]);
		}
		printf("\n");
	}
	
	
	//--------------------------------------------------------------------------------------------------------------
	
	//Lendo Matrizes
	
	int matriz2[LINHA][COLUNA];
	for(i = 0; i < LINHA; i++){
		for(j = 0; j < COLUNA; j++){
			scanf("%d", &matriz2[i][j]);
		}
		
	}
		
	for(i = 0; i < LINHA; i++){
		for(j = 0; j < COLUNA; j++){
			printf("%d", matriz2[i][j]);
			
			}
		printf("\n");
		}
	
	return 0;
	}
	
	/*Funcionamento
	
	Primeiro define as constantes para o tamanho da
	matriz e a declara.
	
	Uso as auxiliares i e j para navegar entre as LINHAS 
	e COLUNAS.
	
	Para leitura uso o scanf dentro do DUPLO FOR.
	
	Para Impressão uso o printf dentro de OUTRO DUPLO FOR.
	*/
