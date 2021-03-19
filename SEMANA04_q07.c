#include <stdio.h>

int main(void) {
  
  int valor;

  scanf("%i", &valor);

  printf("%i notas de R$ 100\n", valor/100);
  valor = valor-valor/100*100;
  printf("%i notas de R$ 50\n", valor/50);
  valor = valor%50;
  printf("%i notas de R$ 20\n", valor/20);
  valor = valor%20;
  printf("%i notas de R$ 10\n", valor/10);
  valor = valor%10;
  printf("%i notas de R$ 5\n", valor/5);
  valor = valor%5;
  printf("%i notas de R$ 2\n", valor/2);
  valor = valor%2;
  printf("%i notas de R$ 1", valor);

  return 0;
}