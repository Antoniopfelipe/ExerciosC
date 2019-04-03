#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
     //Responsável por o rand de forma diferente
     srand((unsigned)time(NULL));
     // VARIAVEL QUE RECEBE O RESTO DA DIVISAO por 3( aleatorio entre 0 e 2)
     int aleatorio = rand()% 3;

     //variavel que recebe o resto de 5(aleatorio entre 1 e 5)
     int aleatorioSegundo = (rand()%5)+1;

     // imprime o valor
     printf("\n%d", aleatorioSegundo);


     //Pausa o programa após executar


    system("pause");




}
