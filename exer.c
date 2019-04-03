#include <stdio.h>
#include <stdlib.h>

void main(){
 int vetor[3];

 vetor[0]=5;
 vetor[1]=10;
 vetor[2]=15;

 printf("\nPosicao o: %d", vetor[0]);
 printf("\nPosicao o: %d", vetor[2]);
 printf("\nPosicao o: %d", vetor[1]);
  //imprimindo em um laço de rep

 for(cont=0; cont <3; cont++){
    printf("\nPosicao %d: %d",cont,vetor[cont]);


 }

}

