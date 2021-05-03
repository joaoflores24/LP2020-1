#include<stdio.h>

int main(void){
	
	int num,i;
	
	scanf("%i", &num);
	
	//repetição até for menor ou igual ao número informado
	for(i=1;i<=num;i++){
		//condição de multíplo por 4
		if(i%4==0){
			printf("PIN");
		}else{
			printf("%i",i);
		}
		//separador com virgula
		if(i<num){
			printf(",");
		}
	}
	
	return 0;
}