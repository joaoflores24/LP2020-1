#include<stdio.h>
  
int main(){
    int input[500], output[500], count, i;
    printf("Entrada\n");
    scanf("%i", &count); 
    for(i = 0; i < count; i++){
        scanf("%i", &input[i]);
    }
    // Reverter sequência 
    for(i = 0; i < count; i++){
        output[i] = input[count-i-1];
    }    
    // Print da sequência reversa
    printf("\nSaida\n");
    for(i = 0; i < count; i++){
        printf("%i\n",output[i]);
    }
    return 0;
}