#include <stdio.h>

int main(){

    int vetor[5];

    float media;

  vetor[0] = 50;
  vetor[1] = 40;
  vetor[2] = 30;
  vetor[3] = 20;
  vetor[4] = 10;

  media = (vetor[0] + vetor[1] + vetor[2] + vetor[3] + vetor[4]) / 5;

  printf("Resultado da media: %.2f\n", media);

    return 0;
}