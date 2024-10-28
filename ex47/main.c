/*
    Escreva um programa receba 5 numeros e calcule a média de todos os números.
*/

#include <stdio.h>

int main(){

  int numbers, soma = 0, i;
  

  for( i = 1; i < 6; i++){
    printf("enter numbers:\n");
    scanf("%d", &numbers);
    soma += numbers;
    getchar();
  }


  printf("media dos numeros: %d", soma / 5);
  
  return 0;
}