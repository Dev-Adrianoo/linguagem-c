/*
    Escreva um programa para controle de exames de pacientes. Deve ser constituído no seguinte menu:

    1. Cadastrar Paciente (Até 100)
    2. Cadastrar Exames (Até 30)
    3. Cadastrar Resultados (Até 100)
    4. Listar os Resultados de um Paciente Específico
    5. Listar Todos os Pacientes (com Nome e Quantidade de Resultados)
    6. Sair

    Estrutura de Paciente:
    - Nome
    - Idade
    - Código do Paciente
    - Quantidade de Resultados

    Estrutura de Exame:
    - Código do Exame
    - Tipo (sangue, fezes, imagem)
    - Descrição do Exame

    Estrutura de Resultado:
    - Código do Paciente
    - Código do Exame
    - Descrição do Resultado
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_PACIENTE 100
#define MAX_EXAME 30
#define MAX_RESULTADO 100

typedef struct
{
  char nome[50];
  int idade;
  int codPaciente;
  int quantResultado;
} Paciente; // Estrutura Paciente

typedef struct
{
  int codExame;
  char tipo[15]; // Sangue, fezes, imagem
  char descricao[100];
} Exame;

typedef struct
{
  int codPaciente2;
  int cod_exame2;
  char descricao2[100];
} Resultado;

int main()
{
  int opcao, quantidadePaciente = 0, quantidadeExame = 0, quantidadeResultado = 0;
  Paciente paciente[MAX_PACIENTE];
  Exame exame[MAX_EXAME];
  Resultado resultado[MAX_RESULTADO];

  while (1)
  {
    printf("\n1. Cadastrar Paciente\n2. Cadastrar Exames\n3. Cadastrar Resultados\n4. Listar os Resultados de um Paciente Especifico\n5. Listar Todos os Pacientes\n6. Sair\nOpcao: ");
    scanf("%d", &opcao);
    getchar();

    switch (opcao)
    {
    case 1:
      if (quantidadePaciente < MAX_PACIENTE)
      {
        printf("\n---- Cadastrar Paciente ----\n");

        paciente[quantidadePaciente].codPaciente = quantidadePaciente + 1;
        printf("\nCodigo Paciente: %d\n", paciente[quantidadePaciente].codPaciente);

        printf("Nome do paciente: ");
        fgets(paciente[quantidadePaciente].nome, sizeof(paciente[quantidadePaciente].nome), stdin);
        paciente[quantidadePaciente].nome[strcspn(paciente[quantidadePaciente].nome, "\n")] = '\0';

        printf("Digite a idade: ");
        scanf("%d", &paciente[quantidadePaciente].idade);
        getchar();

        paciente[quantidadePaciente].quantResultado = 0;

        quantidadePaciente++; // Adicionando 1
      }
      else
      {
        printf("Numero total de pacientes cadastrados\n");
      }

      break;

    case 2:
      printf("\n---- Cadastrar Exames ----\n");
      if (quantidadeExame < MAX_EXAME)
      {
        ;
        exame[quantidadeExame].codExame = quantidadeExame + 1;
        printf("Codigo de Exame: %d\n", exame[quantidadeExame].codExame);

        // Tipo (sangue, fezes, imagem)
        printf("Digite (Sangue, Fezes, Imagem): ");
        fgets(exame[quantidadeExame].tipo, sizeof(exame[quantidadeExame].tipo), stdin);
        exame[quantidadeExame].tipo[strcspn(exame[quantidadeExame].tipo, "\n")] = '\0';

        printf("Digite a descricao do exame: ");
        fgets(exame[quantidadeExame].descricao, sizeof(exame[quantidadeExame].descricao), stdin);
        exame[quantidadeExame].descricao[strcspn(exame[quantidadeExame].descricao, "\n")] = '\0';

        quantidadeExame++;
      }
      else
      {
        printf("Numero total de exames cadastrados\n");
      }
      break;

    case 3:
      printf("\n---- Cadastrar Resultados ----\n");
      if (quantidadeResultado < MAX_RESULTADO)
      {
        int auxPaciente, auxExame;
        printf("Digite o codigo do paciente: ");
        scanf("%d", &auxPaciente);
        getchar();

        for (int i = 0; i < quantidadePaciente; i++)
        {

          if (paciente[i].codPaciente == auxPaciente)
          {
            resultado[i].cod_exame2 = paciente[i].codPaciente;
            printf("Digite o codigo do exame: ");
            scanf("%d", &auxExame);
            getchar();
            for (int i = 0; i < quantidadeExame; i++)
            {
              if (exame[i].codExame == auxExame)
              {
                resultado[i].cod_exame2 = exame[i].codExame;
                strcpy(resultado[i].descricao2, exame[i].descricao); // strcpy(recebe, origem);
                paciente[i].quantResultado++;                        // Atribui + 1 na quantidade de exames do paciente
              }
            }
          }
        }
      }
      break;
    case 4:
      printf("\n---- Listar os Resultados ----\n");
      for (int i = 0; i < quantidadeResultado; i++)
      {
        printf("- --- Resultado %d ----", i + 1);
        printf("%d", resultado[i].cod_exame2);
        printf("%d", resultado[i].codPaciente2);
        printf("%s", resultado[i].descricao2);
        printf("---------------------------------");
      }
      // voces estao de parabens!!!
      break;
      /* case 5:
        printf("\n---- Listar Todos os Pacientes ----\n");
        for (int i = 0; i < quantidadePaciente; i++)
        {
          printf("\n---- Paciente %d ----", i + 1);
          printf("\nNome do paciente: %s\n", paciente[i].nome);
          printf("Idade: %d\n", paciente[i].idade);
          printf("Codigo Paciente: %d\n", paciente[i].codPaciente);
          printf("Tipo de exame: %s\n%s\n%s\n", exame[i].tipo, exame[i+1].tipo,exame[i+2].tipo);
          printf("Descricao: %s\n%s\n%s", resultado[i].descricao2, resultado[i+1].descricao2, resultado[i+2].descricao2);
          printf("\n----------------------------------\n");*/
    case 5:

      printf("\n---- Listar Todos os Pacientes ----\n");
      for (int i = 0; i < quantidadePaciente; i++)
      {
        printf("\n---- Paciente %d ----", i + 1);
        printf("\nNome do paciente: %s\n", paciente[i].nome);
        printf("Idade: %d\n", paciente[i].idade);
        printf("Codigo Paciente: %d\n", paciente[i].codPaciente);
        for (int i = 0; i < quantidadeExame; i++)
        {
          printf("Tipo de exame: %s\nDescricao: %s\n\n", exame[i].tipo, resultado[i].descricao2);
          printf("\n");
          
         if (i == quantidadeExame)
         {
          break;
         }
        }
        printf("\n---------------------------\n");
      }
      break;
    case 6:
      printf("\n---- Sair ----\n");
      printf("Encerrando...");
      return 0;
      break;
    default:
      printf("Erro, opcao invalida! ");
      break;
    }
  }
}