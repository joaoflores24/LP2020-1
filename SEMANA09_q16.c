#include<stdio.h>

int main(void){
	
	//Não consegui fazer com indefinidos numeros :(	
	
	int i,vet[12];
	float somaDivi=0;
	
	for(i=0;i<12;i++){
		scanf("%i", &vet[i]);
	}
	
	somaDivi = (vet[7]+vet[8]+vet[9]+vet[10]+vet[11])/5;
	
	if(somaDivi>1000){
		printf("DEU RUIM");
	}else{
		printf("TURNO TRANQUILO");
	}
	
	return 0;
}