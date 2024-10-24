/*
    Escreva um programa em C que receba a idade de 10 pessoas e diga qual a mais nova e qual a mais velha.
    inicio = receber idade.
    processamento = guardar qual é mais nova e qual é mais velha.
    saida = mostrar na tela 
*/

#include <stdio.h>


int main(){

    int idades, maisNovo = 100, MaisVelho = 0;

    for(int i = 0; i < 11; i++){
      printf("Digite sua idade: \n");
      scanf("%d", &idades);
      getchar();

    if(idades < maisNovo){
      maisNovo = idades;

    } else if (idades > MaisVelho){
      MaisVelho = idades;
    }
}

    printf("Idade do mais velho: %d\n", MaisVelho);
    printf("Idade do mais novo: %d\n", maisNovo);


  return 0;
}