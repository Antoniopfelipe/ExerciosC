#include<stdio.h>
#include<stdlib.h>

void main(){
//definindo variaveis
  int opcao;
  while(opcao<1 || opcao >3){



  printf("\nEscolha uma opcao:");
  printf("\n1- Opcao 1");
  printf("\n2- Opcao 2");
  printf("\n3- Opcao 3\n");
  //lendo a opcao
  scanf("%d", &opcao);

  switch(opcao){
case 1:
    printf("\n Opcao 1 foi escolhida");
break;
case 2:
    printf("\n Opcao 2 foi escolhida");
    break;
    case 3:
    printf("\nOpcao 3 foi escolhida");
    break;
    default:
        printf("\nopcao invalida");
    break;


  }
  }



}
