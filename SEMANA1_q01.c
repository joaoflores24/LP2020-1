#include <stdio.h>

int main() {
  float v_final,v_desconto;

  printf("Informe o valor total dos produtos:\n");
  scanf("%f", &v_final);

  if(v_final>=1&&v_final<=100){
    printf("Opa, ficou tudo por R$%.2f", v_final);
  }else if(v_final>100&&v_final<=200){
    v_desconto = v_final-(v_final*0.05);
    printf("Opa, você teve um desconto de 5%%, ficou tudo por R$%.2f", v_desconto);
  }else{
    v_desconto = v_final-(v_final*0.10);
    printf("Opa, você teve um desconto de 10%%, ficou tudo por R$%.2f", v_desconto);
  }

  return 0;  
}