/*
    Escreva um programa que de controle de exames de pacientes. Deve ser constituído no seguinte menu:

    1. Cadastrar Paciente (Até 100)
    2. Cadastrar Exames (até 30)
    3. Cadastrar Resultados (até 100)
    4. Listar os Resultados de um paciente específico
    5. Listar Todos os Pacientes informando nome e quantidade de resultados
    5.Sair

    Paciente:
    - Nome
    - Idade
    - Código do Paciente
    - Qtd de Resultados

    Exame:
    - Código do exame
    - Tipo (sangue, fezes, imagem)
    - Descrição do Exame

    Resultado:
    - Código de um Paciente
    - Código de um Exame
    - Descrição do resultado
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
  char nome[20];
  int idade;
  int codigo;
  int qtdResultado;
} Paciente;

typedef struct
{
  int codigoExame;
  int tipoExame;
  char descricaoExame[100];
  Paciente paciente;
} Exame;

int main()
{
  system("cls");
  Exame exames[100];
  int opcao, quantidadeMaximaExames = 0, quantidadeMaximaPacientes = 0, quantidadeMaximaResultados = 0, tipoExame;

  while (1)
  {
    printf("\n\nDigite a opcao abaixo.\n1. Cadastrar Paciente.\n2. Cadastrar exame\n3. Cadastrar resultados.\n4. Listar resultados de um paciente em especifico\n5. Listar todos os pacientes informando nome e quantidade de resultados\n6. Sair\n");
    scanf("%d", &opcao);
    getchar();

    switch (opcao)
    {
    case 1: // Cadastrar paciente

      printf("--- Cadastrar Paciente ---\n");
      printf("Digite o nome do paciente: ");
      fgets(exames[quantidadeMaximaPacientes].paciente.nome, sizeof(exames[quantidadeMaximaPacientes].paciente.nome), stdin);
      exames[quantidadeMaximaPacientes].paciente.nome[strcspn(exames[quantidadeMaximaPacientes].paciente.nome, "\n")] = '\0';

      printf("Idade paciente: ");
      scanf("%d", &exames[quantidadeMaximaPacientes].paciente.idade);
      getchar();

      printf("Codigo paciente: ");
      scanf("%d", &exames[quantidadeMaximaPacientes].paciente.codigo);
      getchar();

      printf("Quantidade resultados: %d ", exames[quantidadeMaximaPacientes].paciente.qtdResultado);

      quantidadeMaximaPacientes++;
      printf("\n--- Paciente Cadastrado ---\n");
      break;
    case 2: // Cadastrar Exame
      printf("---- Cadastrar exame ---\n");

      printf("Digite o codigo do exame: ");
      scanf("%d", &exames[quantidadeMaximaExames].codigoExame);
      getchar();

      while (1)
      {
        printf("Diga o tipo do exame: \n1. Fezes\n2. Urina\n3. imagem\n");
        scanf("%d", &exames[quantidadeMaximaExames].tipoExame);
        getchar();

        if (exames[quantidadeMaximaExames].tipoExame == 1)
        {
          printf("Exame de Fezes.\nAguarde na recepcao por gentileza!\n");
          break;
        }
        else if (exames[quantidadeMaximaExames].tipoExame == 2)
        {
          printf("Exame de urina.\nAguarde na Recepcao por gentileza!\n");
          break;
        }
        else if (exames[quantidadeMaximaExames].tipoExame == 3)
        {
          printf("Imagem do exame entregue.\naguarde na recepcao por gentileza!\n");
          break;
        }
        else
        {
          printf("Exame invalido, digite outro numero e tente novamente!\n");
        }
      }
      printf("Descricao do exame: ");
      fgets(exames[quantidadeMaximaExames].descricaoExame, sizeof(exames[quantidadeMaximaExames].descricaoExame), stdin);
      exames[quantidadeMaximaExames].descricaoExame[strcspn(exames[quantidadeMaximaExames].descricaoExame, "\n")] = '\0';

      printf("\n--- Exame cadastrado!! ---\n");
      break;
    case 3: // Cadastrar resultados
    {
      int Aux;
      printf("Digite o codigo do paciente: ");
      scanf("%d", &Aux);
      getchar();

      if (exames[quantidadeMaximaExames].paciente.codigo == Aux)
      {
        printf("");
      }

      break;
    }
    case 4: // Listar resultados

      break;
    case 5: // Listar todos os pacientes cadastrados.

      break;
    case 6: // Sair
      printf("Encerrando o programa...");
      return 0;
    default:
      printf("Opcao invalida!");
      break;
    }
  }
}