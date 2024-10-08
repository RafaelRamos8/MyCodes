//Nome: Rafael da Costa Ramos ---- RA:131093512775 ----- Ciência da Computação 4º Semestre   31/05/2024

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 1000

int RandomInteger(int low, int high)
{
    return (rand() % (high - low + 1)) + low;
}

void selection(int vet[], int n)
{
    int menor, aux, j, i;

    for (i = 0; i < n - 1; i++)
    {
        menor = i;
        for (j = i + 1; j < n; j++)
        {
            if (vet[menor] > vet[j])
                menor = j;
        }
        if (i != menor)
        {
            aux = vet[i];
            vet[i] = vet[menor];
            vet[menor] = aux;
        }
    }
}

int main()
{
    srand(time(NULL)); // Inicializa o gerador de números aleatórios apenas uma vez

    int lista[TAM]; // vetor com TAM posições


    /*
    // Preencher o vetor com valores aleatórios (médio caso)
    for (int a = 0; a < TAM; a++)
    {
        lista[a] = RandomInteger(0, TAM);
    }
    */

    /*
    // Preencher o vetor em ordem decrescente (pior caso)
    for (int a = 0; a < TAM; a++)
    {
        lista[a] = TAM - a;
    }
    */

    /*
    // Preencher o vetor em ordem crescente (melhor caso)
    for (int a = 0; a < TAM; a++)
    {
        lista[a] = a + 1;
    }
    */

    printf("SELECTION SORT\n");

    clock_t tempo = clock(); // Armazena o tempo inicial
    selection(lista, TAM); // função de ordenação
    clock_t tempo2 = clock(); // Armazena o tempo final

    double tempo_execucao = ((double)(tempo2 - tempo)) * 1000.0 / CLOCKS_PER_SEC; // Calcula o tempo de execução em milissegundos

    printf("\nTempo de execucao: %lf ms\n", tempo_execucao); // Imprime o tempo de execução

    return 0;
}
