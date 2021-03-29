#include<stdio.h>

int main(void){
  
  int num,milhar,centena,dezena,unidade;
  
  scanf("%i", &num);
  
  //repartindo os números:
  
  milhar = num/1000;
  //printf("%i\n", milhar);
  num = num%1000;
  
  centena = num/100;
  //printf("%i\n", centena);
  num = num%100;
  
  dezena = num/10;
  //printf("%i\n", dezena);
  num = num%10;
  
  unidade = num;
  //printf("%i\n\n", unidade);
  
  //teste milhar
  switch (milhar){
    case 1:
      printf("mil ");
      break;
    case 2:
      printf("dois mil ");
      break;
    case 3:
      printf("três mil ");
      break;
    case 4:
      printf("quatro mil ");
      break;
    case 5:
      printf("cinco mil ");
      break;
    case 6:
      printf("seis mil ");
      break;
    case 7:
      printf("sete mil ");
      break;
    case 8:
      printf("oito mil ");
      break;
    case 9:
      printf("nove mil ");
      break;  
  }
  
  //teste centena 
  switch (centena){
    case 1:
      if(milhar==0&&dezena==0&&unidade==0){
        printf("cem");
      }else if(milhar>0&&dezena==0&&unidade==0){
        printf("e cem");
      }else if(dezena>0||unidade>0){
        printf("cento e ");
      }
      break;
    case 2:
      if(milhar==0&&dezena==0&&unidade==0){
        printf("duzentos");
      }else if(milhar>0&&dezena==0&&unidade==0){
        printf("e duzentos");
      }else if(dezena>0||unidade>0){
        printf("duzentos e ");
      }
      break;
    case 3:
      if(milhar==0&&dezena==0&&unidade==0){
        printf("trezentos");
      }else if(milhar>0&&dezena==0&&unidade==0){
        printf("e trezentos");
      }else if(dezena>0||unidade>0){
        printf("trezentos e ");
      }
      break;
    case 4:
      if(milhar==0&&dezena==0&&unidade==0){
        printf("quatrocentos");
      }else if(milhar>0&&dezena==0&&unidade==0){
        printf("e quatrocentos");
      }else if(dezena>0||unidade>0){
        printf("quatrocentos e ");
      }
      break;
    case 5:
      if(milhar==0&&dezena==0&&unidade==0){
        printf("quinhentos");
      }else if(milhar>0&&dezena==0&&unidade==0){
        printf("e quinhentos");
      }else if(dezena>0||unidade>0){
        printf("quinhentos e ");
      }
      break;
    case 6:
      if(milhar==0&&dezena==0&&unidade==0){
        printf("seiscentos");
      }else if(milhar>0&&dezena==0&&unidade==0){
        printf("e seiscentos");
      }else if(dezena>0||unidade>0){
        printf("seiscentos e ");
      }
      break;
    case 7:
      if(milhar==0&&dezena==0&&unidade==0){
        printf("setecentos");
      }else if(milhar>0&&dezena==0&&unidade==0){
        printf("e setecentos");
      }else if(dezena>0||unidade>0){
        printf("setecentos e ");
      }
      break;
    case 8:
      if(milhar==0&&dezena==0&&unidade==0){
        printf("oitocentos");
      }else if(milhar>0&&dezena==0&&unidade==0){
        printf("e oitocentos");
      }else if(dezena>0||unidade>0){
        printf("oitocentos e ");
      }
      break;
    case 9:
      if(milhar==0&&dezena==0&&unidade==0){
        printf("novecentos");
      }else if(milhar>0&&dezena==0&&unidade==0){
        printf("e noventos");
      }else if(dezena>0||unidade>0){
        printf("novecentos e ");
      }
      break;
  }
  
  //teste dezena
  switch (dezena){
    case 1:
      if(dezena==1&&unidade==0){
        if(milhar>0&&centena==0){
          printf("e dez");
        }else{
          printf("dez");
        }
      }else if(dezena==1&&unidade==1){
        if(milhar>0&&centena==0){
          printf("e onze");
        }else{
          printf("onze");
        }
      }else if(dezena==1&&unidade==2){
        if(milhar>0&&centena==0){
          printf("e doze");
        }else{
          printf("doze");
        }
      }else if(dezena==1&&unidade==3){
        if(milhar>0&&centena==0){
          printf("e treze");
        }else{
          printf("treze");
        }
      }else if(dezena==1&&unidade==4){
        if(milhar>0&&centena==0){
          printf("e quatorze");
        }else{
          printf("quatorze");
        }
      }else if(dezena==1&&unidade==5){
        if(milhar>0&&centena==0){
          printf("e quinze");
        }else{
          printf("quinze");
        }
      }else if(dezena==1&&unidade==6){
        if(milhar>0&&centena==0){
          printf("e dezesseis");
        }else{
          printf("dezesseis");
        }
      }else if(dezena==1&&unidade==7){
        if(milhar>0&&centena==0){
          printf("e dezessete");
        }else{
          printf("dezessete");
        }
      }else if(dezena==1&&unidade==8){
        if(milhar>0&&centena==0){
          printf("e dezoito");
        }else{
          printf("dezoito");
        }
      }else if(dezena==1&&unidade==9){
        if(milhar>0&&centena==0){
          printf("e dezenove");
        }else{
          printf("dezenove");
        }
      }
      break;
    case 2:
      if(milhar>0&&centena==0){
        printf("e vinte e ");
      }else if(unidade>0){
        printf("vinte e ");
      }else{
        printf("vinte");
      }
      break;
    case 3:
      if(milhar>0&&centena==0){
        printf("e trinta e ");
      }else if(unidade>0){
        printf("trinta e ");
      }else{
        printf("trinta");
      }
      break;
    case 4:
      if(milhar>0&&centena==0){
        printf("e quarenta e ");
      }else if(unidade>0){
        printf("quarenta e ");
      }else{
        printf("quarenta");
      }
      break;
    case 5:
      if(milhar>0&&centena==0){
        printf("e cinquenta e ");
      }else if(unidade>0){
        printf("cinquenta e ");
      }else{
        printf("cinquenta");
      }
      break;
    case 6:
      if(milhar>0&&centena==0){
        printf("e sessenta e ");
      }else if(unidade>0){
        printf("sessenta e ");
      }else{
        printf("sessenta");
      }
      break;
    case 7:
      if(milhar>0&&centena==0){
        printf("e setenta e ");
      }else if(unidade>0){
        printf("setenta e ");
      }else{
        printf("setenta");
      }
      break;
    case 8:
      if(milhar>0&&centena==0){
        printf("e oitenta e ");
      }else if(unidade>0){
        printf("oitenta e ");
      }else{
        printf("oitenta");
      }
      break;
    case 9:
      if(milhar>0&&centena==0){
        printf("e noventa e ");
      }else if(unidade>0){
        printf("noventa e ");
      }else{
        printf("noventa");
      }
      break;
  }
  
  //teste unidade 
  switch (unidade){
    case 1:
      if(milhar>0&&centena==0&&dezena==0){
        printf("e um");
      }else if(dezena==0&&unidade==1){
        printf("um"); 
      }else if(dezena>=2&&unidade==1){
        printf("um");
      }
      break;
    case 2:
      if(milhar>0&&centena==0&&dezena==0){
        printf("e dois");
      }else if(dezena==0&&unidade==2){
        printf("dois"); 
      }else if(dezena>=2&&unidade==2){
        printf("dois");
      }
      break;
    case 3:
      if(milhar>0&&centena==0&&dezena==0){
        printf("e três");
      }else if(dezena==0&&unidade==3){
        printf("três"); 
      }else if(dezena>=2&&unidade==3){
        printf("três");
      }
      break;
    case 4:
      if(milhar>0&&centena==0&&dezena==0){
        printf("e quatro");
      }else if(dezena==0&&unidade==4){
        printf("quatro"); 
      }else if(dezena>=2&&unidade==4){
        printf("quatro");
      }
      break;
    case 5:
      if(milhar>0&&centena==0&&dezena==0){
        printf("e cinco");
      }else if(dezena==0&&unidade==5){
        printf("cinco");  
      }else if(dezena>=2&&unidade==5){
        printf("cinco");
      }
      break;
    case 6:
      if(milhar>0&&centena==0&&dezena==0){
        printf("e seis");
      }else if(dezena==0&&unidade==6){
        printf("seis"); 
      }else if(dezena>=2&&unidade==6){
        printf("seis");
      }
      break;
    case 7:
      if(milhar>0&&centena==0&&dezena==0){
        printf("e sete");
      }else if(dezena==0&&unidade==7){
        printf("sete"); 
      }else if(dezena>=2&&unidade==7){
        printf("sete");
      }
      break;
    case 8:
      if(milhar>0&&centena==0&&dezena==0){
        printf("e oito");
      }else if(dezena==0&&unidade==8){
        printf("oito"); 
      }else if(dezena>=2&&unidade==8){
        printf("oito");
      }
      break;
    case 9:
      if(milhar>0&&centena==0&&dezena==0){
        printf("e nove");
      }else if(dezena==0&&unidade==9){
        printf("nove"); 
      }else if(dezena>=2&&unidade==9){
        printf("nove");
      }
      break;
  }
  
  return 0; 
}