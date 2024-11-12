/*
    Escreva um programa que cadastre 3 alunos.
    Cada aluno possui, nome, média e idade.
    O programa deve permitir:

    1. Cadastrar Aluno FEITO
    2. Listar alunos FEITO
    3. Exibir aluno com maior media FEITO
    4. Exibir aluno mais velho
    5. Sair

    Separe as tarefas em subrotinas!
*/
#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 5

typedef struct
{
  char nome[15];
  int idade;
  float media;
} Aluno;

Aluno aluno[MAX_ALUNOS];
int quantidadeAluno = 0;

void CadastrarAluno();

void listarAluno();

void MaiorMedia();

void MaiorIdade();

int main()
{
  int opcao;
  while (1)
  {
    printf("\n-------Uai, oce aqui dnv? bem vindo so-------\n");
    printf("1. Cadastrar Aluno\n2. Listar Alunos\n3. Exibir aluno com maior media\n4. Exibir aluno mais velho\n5. Sair\n");
    scanf("%d", &opcao);
    getchar();

    switch (opcao)
    {
    case 1:
      CadastrarAluno();
      break;
    case 2:
      listarAluno();
      break;
    case 3:
      MaiorMedia();
      break;
    case 4:
      MaiorIdade();
      break;
    case 5:
      printf("Saindo do programa!\n");
      return 0;
      break;
    }
  }
}

void CadastrarAluno()
{
  if (quantidadeAluno < MAX_ALUNOS)
  {
    int quantidadeNota = 3, nota, soma = 0;

    printf("Digite seu nome: ");
    fgets(aluno[quantidadeAluno].nome, sizeof(aluno[quantidadeAluno].nome), stdin);
    aluno[quantidadeAluno].nome[strcspn(aluno[quantidadeAluno].nome, "\n")] = '\0';

    printf("Idade: ");
    scanf("%d", &aluno[quantidadeAluno].idade);
    getchar();

    for (int i = 0; i < quantidadeNota; i++)
    {
      printf("Digite sua nota: ");
      scanf("%d", &nota);
      soma += nota;
      getchar();
    }

    aluno[quantidadeAluno].media = soma / quantidadeNota;
    quantidadeAluno++;
    printf("\n--- Aluno cadastrado ---\n");
  }
}

void listarAluno()
{
  if (quantidadeAluno == 0)
  {
    printf("\nNenhum Aluno Cadastrado!\n");
  }
  else
  {
    for (int i = 0; i < quantidadeAluno; i++)
    {
      printf("--- Aluno %d ----\n", i + 1);
      printf("Nome aluno: %s\n", aluno[i].nome);
      printf("Idade aluno: %d\n", aluno[i].idade);
      printf("Media aluno %.2f\n", aluno[i].media);
    }
  }
}

void MaiorMedia()
{
  float maiorMedia = 0;
  int indice;
  for (int i = 0; i < quantidadeAluno; i++)
  {
    if (aluno[i].media > maiorMedia)
    {
      maiorMedia = aluno[i].media;
      indice = i;
    }
  }
  printf("Aluno %s tem a maior media com: %.2f\n", aluno[indice].nome, maiorMedia);
}

void MaiorIdade()
{
  int maiorIdade = 0;
  int indice;
  for (int i = 0; i < quantidadeAluno; i++)
  {
    if (aluno[i].idade > maiorIdade)
    {
      maiorIdade = aluno[i].idade;
      indice = i;
    }
  }
  printf("Aluno %s tem a maior idade com: %d\n", aluno[indice].nome, maiorIdade);
}