#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função que calcula o fatorial
void fatorial(int *num) {
    int resultado = 1; // Inicialização do resultado
    int i;
    int valor = *num; // Armazena o valor original de num
    
    for (i = 1; i <= valor; i++) { // Loop de 1 até valor
        resultado *= i; // Multiplica resultado pelo valor de i em cada iteração
    }
    
    *num = resultado; // Armazena o resultado do fatorial na variável original
}

int main() {
    setlocale(LC_ALL,"");
    
    int num = 0;
    
    printf("Digite um número para realizar operação fatorial: ");
    scanf("%d", &num); 
    
    fatorial(&num);
    
    printf("O fatorial é: %d\n", num);
    
    return 0;
}
