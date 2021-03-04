#include<stdio.h>

int main(void){
  int num1, num2;

  printf("Informe dois valores:\n");
  scanf("%i %i", &num1, &num2);

  if(num1>num2 && num1-num2==1){
    printf("%i %i %i %i", num2-1, num2, num1, num1+1);
  }else if(num2>num1 && num2-num1==1){
    printf("%i %i %i %i", num1-1, num1, num2, num2+1);
  }else if(num1>num2 && num1-num2==2){
    printf("%i %i %i %i %i", num2-1, num2, num2+1, num1, num1+1);
  }else if(num2>num1 && num2-num1==2){
    printf("%i %i %i %i %i", num1-1, num1, num1+1, num2, num2+1);
  }else if(num1>num2){
    printf("%i %i %i %i %i %i", num2-1, num2, num2+1, num1-1, num1, num1+1);
  }else{
    printf("%i %i %i %i %i %i", num1-1, num1, num1+1, num2-1, num2, num2+1);
  }

}