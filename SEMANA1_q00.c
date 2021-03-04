#include <stdio.h>

int main() {
  int num1,num2;

  printf("Digite dois números:\n");
  scanf("%i",&num1);
  scanf("%i",&num2);

  if(num1<num2){
    printf("%i %i", num1, num2);
  }else{
    printf("%i %i", num2, num1);
  }

  return 0;  
}