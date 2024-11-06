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

typedef struct {
  char nome[20];
  int idade;
  int codigo;
  int qtdResultado;
}Paciente;

typedef struct{
  int codigoExame;
  char tipoExame[10];
  char descricaoExame[50];
  Paciente paciente;
}Exame;

int main(){
  system("cls");
  int opcao;
  Exame exame;
  printf("Digite a opcao abaixo.\n1. Cadastrar Paciente.\n2. Cadastrar exame\n3. Cadastrar resultados.\n4. Listar resultados de um paciente em específico\n5. Listar todos os pacientes informando nome e quantidade de resultados\n6. Sair\n");
  scanf("%d", &opcao);


    switch(opcao){
      case 1: // Cadastrar paciente
      

        break;
      case 2: // Cadastrar Exame

        break;
      case 3: // Cadastrar resultados

        break;
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

  return 0;
}