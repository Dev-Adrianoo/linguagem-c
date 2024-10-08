#include <stdio.h>

int main(){

  int vetor[5];
  int i;


  for(i=0;i < 7; i++){
    printf("insira um dado: ");
    scanf("%d", &vetor[i]);

    if(i >= 4){
      printf("Numero de dados inseridos ultrapassados!!\n");
      break;
    }
  }


  printf("dados inseridos:\n ");
  for(i=0; i<5; i++){
    printf("%d ", vetor[i]);
  }

  return 0;
}