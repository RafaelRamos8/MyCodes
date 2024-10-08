#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o que calcula o fatorial
void fatorial(int *num) {
    int resultado = 1; // Inicializa��o do resultado
    int i;
    int valor = *num; // Armazena o valor original de num
    
    for (i = 1; i <= valor; i++) { // Loop de 1 at� valor
        resultado *= i; // Multiplica resultado pelo valor de i em cada itera��o
    }
    
    *num = resultado; // Armazena o resultado do fatorial na vari�vel original
}

int main() {
    setlocale(LC_ALL,"");
    
    int num = 0;
    
    printf("Digite um n�mero para realizar opera��o fatorial: ");
    scanf("%d", &num); 
    
    fatorial(&num);
    
    printf("O fatorial �: %d\n", num);
    
    return 0;
}
