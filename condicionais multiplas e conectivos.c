#include <stdio.h>
#include <stdlib.h>

void main(){
  int a =10;
  //conectibo logico and E---se uma compara��o for falsa n�o entra no bloco
  if (a > 5 && a < 15){
    printf("\n a variavel a esta entre 5 e 15");
  }
  //compara�ao ou
  if(a > 5 || a > 15){
    printf("\n A variavel 'a' eh maior que 5 ou maior que 15");
}
//misturando conctivos
 if((a > 5 && a < 15)|| a==20){
        printf("\nA eh 20");


 }


}
