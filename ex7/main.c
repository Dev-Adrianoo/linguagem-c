#include <stdio.h>

int main(){
  
  char nome[50];
  float nota1,nota2,media;

  printf("Digite seu nome: \n");
  scanf("%s", nome);

  printf("Digite sua primeira nota:\n ");
  scanf("%f", &nota1);

  printf("Digite sua segunda nota: \n");
  scanf("%f", &nota2);

  media = (nota1 + nota2) / 2;

  printf("a media do aluno : %.2f\n", media);

  return 0;
}
