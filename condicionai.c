#include <stdio.h>
#include <stdlib.h>

void main(){
 int a = 4,opcao =3;
 float b= 2.5;
 char c ='x';
 if(a==5){
     printf(" A variável a = 5");
 }
 if(b== 2.5){
        printf(" \n A variavel b=2.5");
 }
 if(c=='x'){
        printf("\n A varaivel c = x");

 }

// numero par ou imar
if(a%2==1){
    printf ("\nA variavel a é impar");
}else{
      printf("\n A variavel e par");
}
//condicional composta
if (opcao==1){
    printf("\n a opcao =1");
} else if (opcao==2){
     printf("\n a opcao =2");
}else{
     printf("\n a opcao nao e 1 e nem 2 eh igual a: %d", opcao);
}




}
