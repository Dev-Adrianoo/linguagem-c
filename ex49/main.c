/*
    Escreva um programa que receba 9 numeros em uma matrix 3x3.
    E escreva na tela a soma de sua diagnonal.

    Exemplo:

    3 1 1
    1 3 1
    1 1 3

    3+3+3 = 9
*/    

#include <stdio.h>

int main(){

  int matriz[3][3] = {{1,2,3},
                      {4,5,6},
                      {7,8,9}};
  // int soma = 0;

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("%d ", matriz[i][j]);
    }
  }
  
  return 0;
}
