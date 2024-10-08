#include <stdio.h>
#include <stdlib.h>

int main(){

  float cFabric, cConsumo, imposto, distribuidor;

  printf("\n\tCusto de Fabrica: R$");
  scanf("\n%f", &cFabric);
  
  distribuidor = (cFabric * 0.25);
  
  imposto = (cFabric * 0.45);
  
  cConsumo = distribuidor + imposto + cFabric;

  printf("\n\n\t\tValor final do automovel: R$%.2f \n", cConsumo);

  system("Pause");
}