#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main(){
    setlocale(LC_ALL,"Portuguese");

    char origem[N] = {"Olá, Mundo! "};
    char destino[N];

    printf("before stcpy: \n");
    puts(origem);
    puts(destino);

    strcpy(destino, origem); //ele copia de uma origem para seu destino.

    printf("after strcpy: \n");
    puts(origem);
    puts(destino);
   
  return 0;

}