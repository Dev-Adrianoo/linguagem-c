

#include <stdio.h>
#include <string.h>

typedef struct {
  char nome [30];
  int idade;
  int notas[4];
  float media;
} Aluno;     //class em letra maiscula


int main(){
  Aluno aluno;
  
  printf("Digite o nome do aluno: ");
  fgets(aluno.nome, sizeof(aluno.nome), stdin);
  aluno.nome[strcspn(aluno.nome , "\n")] = '\0';

  printf("Digite a idade do aluno: ");
  scanf("%d", &aluno.idade);

  for(int i = 0; i < 4; i++){

    printf("Informe as notas %d: ", i + 1);
    scanf("%d", &aluno.notas);
    aluno.media += aluno.notas[i];
  }

  aluno.media /= 4;

  printf("Aluno: %s\n", aluno.nome);
  printf("idade: %d\n", aluno.idade);
  printf("media: %.2f\n", aluno.media);
  
  return 0;
}