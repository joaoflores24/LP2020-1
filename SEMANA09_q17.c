#include<stdio.h>

int main(void){
	
	int valor,vMaior,v0=0,v1=0,v2=0,v3=0,v4=0,v5=0,v6=0,v7=0,v8=0,v9=0;
	
	while(valor>=0){
		scanf("%i", &valor);
		if(valor==0){
			v0++;
		}else if(valor==1){
			v1++;
		}else if(valor==2){
			v2++;
		}else if(valor==3){
			v3++;
		}else if(valor==4){
			v4++;
		}else if(valor==5){
			v5++;
		}else if(valor==6){
			v6++;
		}else if(valor==7){
			v7++;
		}else if(valor==8){
			v8++;
		}else if(valor==9){
			v9++;
		}
	}
	
	if(v0>=1){
		printf("0:%i\n",v0);	
	}
	if(v1>=1){
		printf("1:%i\n",v1);	
	}
	if(v2>=1){
		printf("2:%i\n",v2);
	}
	if(v3>=1){
		printf("3:%i\n",v3);	
	}
	if(v4>=1){
		printf("4:%i\n",v4);	
	}
	if(v5>=1){
		printf("5:%i\n",v5);
	}
	if(v6>=1){
		printf("6:%i\n",v6);	
	}
	if(v7>=1){
		printf("7:%i\n",v7);	
	}
	if(v8>=1){
		printf("8:%i\n",v8);
	}
	if(v9>=1){
		printf("9:%i\n",v9);
	}
	
	return 0;
}