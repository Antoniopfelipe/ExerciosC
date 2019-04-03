#include <stdio.h>
#include <stdlib.h>

void main(){
char palavra[10];

printf("Digite uma palavra\n");
//limpa o buffer
setbuf(stdin,0);
//ler a string

fgets(palavra,255, stdin);
// limpa as casa não utilizadas
palavra[strlen(palavra)-1]='\0';

//imprime na tela
printf("%s", palavra);






}
