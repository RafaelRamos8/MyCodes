//Nome: Rafael da Costa Ramos ---- RA:131093512775 ----- Ci�ncia da Computa��o 4� Semestre   31/05/2024

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100000

int RandomInteger(int low, int high) {

    return (rand() % (high - low + 1)) + low;
}

void fInsertion_Sort(int *pVetor, int tamanho) {

    int vAux;   // i
    int vTemp;  // j
    int vTroca; // aux

    for (vAux = 1; vAux < tamanho; vAux++) { // vAux come�a na posi��o 1 do vetor e vai at� a ultima posi��o;
        vTemp = vAux; // vTemp recebe a posi��o que est� passando no "for";

        while (vTemp > 0 && pVetor[vTemp] < pVetor[vTemp - 1]) { // Adicionada a condi��o para evitar acessar um �ndice inv�lido
            // Ocorre a troca;
            vTroca = pVetor[vTemp];
            pVetor[vTemp] = pVetor[vTemp - 1];
            pVetor[vTemp - 1] = vTroca;
            vTemp--; // vTemp decrementa 1;
        }
    }
}

int main() {

    clock_t tempo = clock(); // Armazena o tempo inicial
    srand(time(NULL)); // Inicializa o gerador de n�meros aleat�rios apenas uma vez

    int lista[TAM]; // vetor com TAM posi��es

    /*
    for (int a = 0; a < TAM; a++)//valores randomizados [medio caso]
    {
        lista[a] = RandomInteger(0, TAM);
    }
    */

    /*
   for (int a = 0; a < TAM; a++) //ordem decrescente [pior caso]
    {
        lista[a] = TAM - a;
    }
   */

    /*
    for (int a = 0; a < TAM; a++) //ordem crescente [melhor caso]
    {
        lista[a] = a + 1;
    }

    */

    printf("INSERTION SORT\n");
    for (int k = 0; k < TAM; k++) {
    }
    fInsertion_Sort(lista, TAM); // fun��o de ordena��o
    clock_t tempo2 = clock(); // Armazena o tempo final

    for (int k = 0; k < TAM; k++) {
    }

    double tempo_execucao = ((double)(tempo2 - tempo)) * 1000.0 / CLOCKS_PER_SEC; // Calcula o tempo de execu��o em milissegundos

    printf("\nTempo de execucao: %lf ms\n", tempo_execucao); // Imprime o tempo de execu��o

    return 0;
}
