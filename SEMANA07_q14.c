#include<stdio.h>

int main(void){
	
	int andar=0,sobe=0,desce=0;
	
	do{
		scanf("%i", &andar);
		if(andar == 0){
			printf("-\n");
		}else if (andar>sobe){
			sobe=andar;
			printf("C\n");
		}else if(desce<sobe){
			desce=andar;
			printf("B\n");
		}
	}while(andar>=0);
	
	return 0;
}