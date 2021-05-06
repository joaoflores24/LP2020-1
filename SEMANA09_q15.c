#include<stdio.h>

int main(void){
	
	int valor,vMaior;
	
	while(valor>=0){
		scanf("%i", &valor);
		if(valor>1000){
			vMaior=valor;
		}
	}
	
	if(vMaior>1000){
		printf("DEU RUIM");
	}else{
		printf("TURNO TRANQUILO");
	}
	
	return 0;
}