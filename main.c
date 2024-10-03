#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {
//////////Teste while 1 (login operador/convidado)
    printf("Teste while 1 (login operador/convidado)\n");
  
    int op = 0;
  
    while (op != 3)
    {
    printf("\n");
    printf("====MENU====\n");
    printf("1) Modo Convidado\n");
    printf("2) Modo Operador\n");
    printf("3) Sair\n\n");

    printf("O que deseja fazer? \n\n");
    scanf("%d", &op);
    if (op == 1){
      printf("Bem vindo ao modo convidado!\n");}
    else if (op == 2){
      printf("Bem vindo ao modo operador!\n");}
    }
    printf("Programa fechado!\n\n");

/////////Teste looping while
    printf("---------------------------------\n\n");

    int loop = 0;
  
    printf("Teste 02 - Loop de while\n");
  
    while (loop != 5)
    {
    printf("Vez %d\n", loop);
    loop = loop + 1;
    }

////////Teste looping while cm pergunra
    printf("---------------------------------\n\n");

    int n, quest_loop;
    n = 1;
  
    printf("Até quanto você deseja contar? \n");
    scanf("%d", &quest_loop);

    while (n != quest_loop+1){
      printf("- %d\n", n);
      n = n + 1;
    }
  
  return 0;
}
