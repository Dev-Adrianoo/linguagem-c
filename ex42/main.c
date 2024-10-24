#include <stdio.h>


int main(){

  int mat[3][3] = {{1,2,3},
                   {4,5,6}, 
                   {7,8,9}};

  printf("Imprimindo a primeira linha: \n");
  for(int J = 0; J < 3; J++){
    printf("%d ", mat[0][J]);
  }

  printf("Matriz completa:\n");
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("%d", mat[i][j]);
    }
  }

  return 0;
}