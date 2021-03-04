#include <stdio.h>

int main() {
  float num1, num2, num3;

  printf("Informe três valores reais:\n");
  scanf("%f %f %f", &num1, &num2, &num3);

  if(num1+num2>num3&&num1+num3>num2&&num2+num3>num1){
    if(num1==num2&&num1==num3&&num2==num3){
      printf("EQUILÁTERO");
    }else if(num1==num2||num1==num3||num2==num3){
      printf("ISÓSCELES");
    }else{
      printf("ESCALENO");
    }
  }else{
    printf("NÃO FORMA");
  }
}