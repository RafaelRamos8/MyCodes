//Nome: Rafael da Costa Ramos ---- RA:131093512775 ----- Ciência da Computação 4º Semestre   31/05/2024

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10000

int RandomInteger(int low, int high) {
    return (rand() % (high - low + 1)) + low;
}

void merge(int *V, int inicio, int meio, int fim) {
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;
    tamanho = fim - inicio + 1;
    p1 = inicio;
    p2 = meio + 1;
    temp = (int *)malloc(tamanho * sizeof(int));

    if (temp != NULL) {
        for (i = 0; i < tamanho; i++) {
            if (!fim1 && !fim2) {
                if (V[p1] < V[p2])
                    temp[i] = V[p1++];
                else
                    temp[i] = V[p2++];

                if (p1 > meio) fim1 = 1;
                if (p2 > fim) fim2 = 1;
            } else {
                if (!fim1)
                    temp[i] = V[p1++];
                else
                    temp[i] = V[p2++];
            }
        }

        for (j = 0, k = inicio; j < tamanho; j++, k++) {
            V[k] = temp[j];
        }

        free(temp);
    }
}

void mergeSort(int *V, int inicio, int fim) {
    int meio;
    if (inicio < fim) {
        meio = (inicio + fim) / 2;
        mergeSort(V, inicio, meio);
        mergeSort(V, meio + 1, fim);
        merge(V, inicio, meio, fim);
    }
}

int main() {
    clock_t tempo, tempo2; // Armazena o tempo inicial e final
    srand(time(NULL)); // Inicializa o gerador de números aleatórios apenas uma vez

    int lista[TAM]; // vetor com TAM posições

    /*
    // Preencher o vetor com valores aleatórios (médio caso)
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

    printf("MERGE SORT\n");

    tempo = clock(); // Armazena o tempo inicial
    mergeSort(lista, 0, TAM - 1); // função de ordenação
    tempo2 = clock(); // Armazena o tempo final

    double tempo_execucao = ((double)(tempo2 - tempo)) * 1000.0 / CLOCKS_PER_SEC; // Calcula o tempo de execução em milissegundos

    printf("\nTempo de execucao: %lf ms\n", tempo_execucao); // Imprime o tempo de execução

    return 0;
}
