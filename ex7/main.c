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

  if(media >= 8){

    printf("Aprovado! com a media %.2f\n", media);

  }else if(media >= 6 && media < 8){

    printf("Recuperação! com a media: %.2f\n", media);

  }else {

    printf("Reprovado! com a media: %.2f\n", media);

  }

  return 0;
}
