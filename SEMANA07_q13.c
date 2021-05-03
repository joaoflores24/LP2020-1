#include<stdio.h>

int main()

{
   int number;
   int i;
   int maior1 = 0;
   int maior2 = 0;
   int maior3 = 0;
   do{
   		printf("Digite o valor :");
        scanf("%d",&number);
        if( number > maior1 ){    
			if(maior1 > maior2){        
				maior2 = maior1;
				maior3 = maior2;    
			}    
			maior1 = number;
		}else if( number > maior2){    
			if(maior2 > maior3){        
				maior3 = maior2;    
			}
			maior2 = number;
		}else if(number > maior3){
			maior3 = number;
		}
   }while(number!=0);
   printf("%d\n", maior1);
   printf("%d\n", maior2);
   printf("%d\n", maior3);
   //NÃO CONSEGUI FAZER O TERCEIRO :(
 return 0;
}