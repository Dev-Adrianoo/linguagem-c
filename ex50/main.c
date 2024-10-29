/*
    Escreva um programa que receba 9 numeros em uma matrix 3x3.
    E escreva na tela a matriz transposta

    Exemplo:
    Matriz Inicial:
    3 1 1
    1 3 1
    1 1 3

    Matriz transposta (As linhas viram colunas):
    1 1 3
    1 3 1
    3 1 1
*/    
#include <stdio.h>

int main(){

  int Matriz[3][3]; 
  int i,j;

  // Pedindo ao úsuario pra digitar a matriz
  for(i = 0;i < 3; i++){
    for(j = 0; j < 3; j++){
      printf("Digite os numeros da matriz [%d] [%d]:\n", i, j);  // pegando os valores I, e J
      scanf("%d", &Matriz[i][j]); //lendo a variavel Matriz com os indices I e J
      getchar();
    }
  }
  
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
    printf("%d ", Matriz[j][i]); //percorre primeiro a coluna como linhas para criar a matriz transposta
    }
    printf("\n");  
}

  return 0;
}