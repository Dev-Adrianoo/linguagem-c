#include <stdio.h>
#include <string.h>
#include <locale.h>


#define TamanhoNome 50

struct aluno {
  char nome[TamanhoNome];
  int idade;
  float nota;
  float resultado;
};

typedef struct aluno aluno;

int main(){
  setlocale(LC_ALL, "Portuguese");

  aluno aluno;

  aluno.nota = 0;
  aluno.resultado = 0;

  printf("Digite seu nome:\n");
  fgets(aluno.nome, sizeof(aluno.nome),stdin);
  aluno.nome[strcspn(aluno.nome, "\n")] = '\0';

  printf("Digite sua idade:\n");
  scanf("%d", &aluno.idade);
  getchar();

  for(int i = 1; i < 4; i++){
    printf("Digite suas notas:\n");
    scanf("%f", &aluno.nota);
    aluno.resultado += aluno.nota;
  }

    aluno.resultado = (aluno.resultado) / 3;

    printf("%.2f", aluno.resultado);

  if(aluno.resultado <= 5 && aluno.resultado >= 3){
    printf("\n\nRecuperação!\n\n");
  } else if (aluno.resultado >= 7){
    printf("\n\nAprovado!\n\n");
  } else {
    printf("\n\nReprovado!\n\n");
  }
  
  printf("Nome : %s\n", aluno.nome);
  printf("Idade: %d\n", aluno.idade);
  printf("Media total: %2.f\n", aluno.resultado);

  return 0;
}
