#include <stdio.h>

int main(void) {
  
  int valor;

  scanf("%i", &valor);

  //resto de 100
  if(valor/100>=1){
    printf("%i notas de R$ 100\n", valor/100);
    valor = valor-valor/100*100;   
  }

  //resto de 50
  if(valor/50>=1){
    printf("%i notas de R$ 50\n", valor/50);
    valor = valor%50;
  }

  //resto de 20
  if(valor/20>=1){
    printf("%i notas de R$ 20\n", valor/20);
    valor = valor%20;
  }

  //resto de 10
  if(valor/10>=1){
    printf("%i notas de R$ 10\n", valor/10);
    valor = valor%10;
  }

  //resto de 5
  if(valor/5>=1){
    printf("%i notas de R$ 5\n", valor/5);
    valor = valor%5;
  } 

  //resto de 2
  if(valor/2>=1){
    printf("%i notas de R$ 2\n", valor/2);
    valor = valor%2;
  }
  
  //resto de 1
  if(valor/1>=1){
    printf("%i notas de R$ 1\n", valor);
  } 

  return 0;
}