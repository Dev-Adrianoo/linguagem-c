#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

  int mat [3][3];

  mat[0][0] = 1;
  mat[0][1] = 2;
  mat[0][2] = 3;

  mat[1][0] = 4;
  mat[1][1] = 5;
  mat[1][2] = 6;

  mat[2][0] = 7;
  mat[2][1] = 8;
  mat[2][2] = 9;

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("Matriz: %d ", mat[i][j]);
    }
    printf("\n");
  }

  return 0;
}