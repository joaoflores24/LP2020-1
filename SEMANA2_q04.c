#include<stdio.h>

int main(void){

  int num1, num2, num3;

  printf("Informe três números:\n");
  scanf("%i %i %i", &num1, &num2, &num3);

  if((num1==1&&num2==1)||(num1==1&&num3==1)||(num2==1&&num3==1)){
    printf("APROVADO COM A");
  }else if((num1==2&&num2==2)||(num1==2&&num3==2)||(num2==2&&num3==2)){
    printf("APROVADO COM B");
  }else if((num1==3&&num2==3)||(num1==3&&num3==3)||(num2==3&&num3==3)){
    printf("APROVADO COM C");
  }else if((num1==4&&num2==4)||(num1==4&&num3==4)||(num2==4&&num3==4)){
    printf("REPROVADO");
  }else{
    printf("INCONCLUSIVO");
  }

}