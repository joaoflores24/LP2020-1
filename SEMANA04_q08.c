#include <stdio.h>

int main(void) {
  
  float valor1, valor2;

  scanf("%f %f", &valor1, &valor2);

  if(((valor1>=67&&valor1<=89)&&(valor2>=213&&valor2<=235))||((valor1>=759&&valor1<=781)&&(valor2>=213&&valor2<=235))){
    printf("GOLACO");
  }else if((valor1<67||valor1>781)||(valor2>235)){
    printf("UHHH");
  }else{
    printf("GOL");
  }

  return 0;
}