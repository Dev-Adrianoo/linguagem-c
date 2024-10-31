/*
  Escreva um programa que seja um agenda de até 100 tarefas.
  cada tarefa terá Descrição, Data (struct com dia, mes e ano), hora (Struct com hora e minuto) e status (concluido ou pendente)

   O programa deverá ser encerrado apenas quando o usuário escolher a opção de sair.
   o programa deverá apresentar um menu com as seguintes funções:
   1. Cadastrar uma nova tarefa
   2. Listar todas as tarefas Pendentes
   3. Listar todas as tarefas concluídas.
   4. Sair
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_TAREFAS 100

typedef struct {
  int dia,mes,ano;
}Data;

typedef struct{
  int hora;
  int minuto;
}Hora;


typedef struct {
  char descricao[50];
  Data data;
  Hora hora;
  bool status;
}Tarefa;

int main(){
  int opcao,contadorTarefa = 0;
  Tarefa tarefa[MAX_TAREFAS];

  while (1){
      printf("Escolha uma das opções a seguir:\n");
      printf("1. Cadastrar uma nova tarefa\n2. Listar Tarefas\n3. Listar Concluidos\n4. Sair\n");
      scanf("%d", &opcao);
      getchar();

      switch (opcao)
    {
    case 1:
      if(contadorTarefa == MAX_TAREFAS){
        printf("Não é possivel colocar mais tarefas");
        break;
      }

      break;
    case 2:

      break;
    case 3: 
        printf("");
    case 4:
        printf("Saindo do programa! ");
    default:
        printf("Opção invalida!");
        return 0;
      break;
    } 
  }
}