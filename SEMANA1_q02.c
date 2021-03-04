#include <stdio.h>

int main() {
  int num1,num2;

  printf("Informe dois números:\n");
  scanf("%i %i", &num1, &num2);

  if(num1>num2){
    printf("%i %i %i %i %i %i", num2-1, num2, num2+1, num1-1, num1, num1+1);
  }else{
    printf("%i %i %i %i %i %i", num1-1, num1, num1+1, num2-1, num2, num2+1);
  }

  return 0;  
}