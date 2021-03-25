#include <stdio.h>

int main(void) {
  
  	int n0,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12;
  	int somaImpares, somaPares, somaIP;
  	
  	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d", &n0,&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11,&n12);

	somaImpares = (n1 + n3 + n5 + n7 + n9 + n11)*3;
	somaPares = n0 + n2 + n4 + n6 + n8 + n10 + n12;
	somaIP = somaPares + somaImpares;
	
	if(somaIP%10==0){
		printf("S");
	}else{
		printf("N");
	}

  return 0;
}