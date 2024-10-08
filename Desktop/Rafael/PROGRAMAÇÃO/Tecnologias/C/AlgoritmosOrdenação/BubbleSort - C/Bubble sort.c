//Nome: Rafael da Costa Ramos ---- RA:131093512775 ----- Ci�ncia da Computa��o 4� Semestre   31/05/2024

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // clock(), CLOCKS_PER_SEC e clock_t

#define TAM 10 // constante para tamanho do vetor

int RandomInteger(int low, int high) {
    return (rand() % (high - low + 1)) + low;
}

void bubbleSort(int v[], int n) {
    int a, b, aux;
    for (a = n - 1; a >= 1; a--) {
        for (b = 0; b < a; b++) {
            if (v[b] > v[b + 1]) {
                aux = v[b];
                v[b] = v[b + 1];
                v[b + 1] = aux;
            }
        }
    }
}

int main() {
    clock_t tempo_inicial, tempo_final; // vari�veis para medir o tempo
    srand(time(NULL)); // inicializa o gerador de n�meros aleat�rios

    int lista[TAM]; // vetor com TAM posi��es

    /*
    // Preencher o vetor com valores aleat�rios (m�dio caso)
    for (int a = 0; a < TAM; a++) {
        lista[a] = RandomInteger(0, TAM);
    }
    */

    /*
    // Preencher o vetor com valores em ordem decrescente (pior caso)
    for (int a = 0; a < TAM; a++) {
        lista[a] = TAM - a;
    }
    */

    /*
    // Preencher o vetor com valores em ordem crescente (melhor caso)
    for (int a = 0; a < TAM; a++) {
        lista[a] = a + 1;
    }
    */

    printf("BUBBLE SORT\n");

    // Verificando tempo de execu��o do bubble sort
    tempo_inicial = clock(); // armazena o tempo inicial
    bubbleSort(lista, TAM);
    tempo_final = clock(); // armazena o tempo final

    // Calcula o tempo de execu��o em milissegundos
    double tempo_execucao = ((double)(tempo_final - tempo_inicial)) * 1000.0 / CLOCKS_PER_SEC;

    // Imprime o tempo na tela
    printf("Tempo de execucao: %lf ms\n", tempo_execucao); // convers�o para double

    return 0;
}
