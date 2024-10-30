/*
    Desenvolver um programa em C que implemente o jogo de "Adivinhação de Números".
 
    Descrição do Jogo:
    O jogo consiste no computador escolher aleatoriamente um número num intervalo específico (por exemplo, de 1 a 100). O jogador deve adivinhar o número,
    e o programa fornecerá dicas se o número é maior ou menor que a tentativa do jogador. O jogo continua até que o jogador acerte o número ou deseje encerrar.
    
    Requisitos funcionais:
    RF01. Escolha do Intervalo: o jogador pode definir o intervalo de números, dentro do qual um número deve ser adivinhado
    RF02. Geração de Números Aleatórios: o programa deve gerar um número aleatório no intervalo definido.
    RF03. Entrada do Jogador: permitir que o jogador insira tentativas para adivinhar o número.
    RF04. Fornecimento de Dicas: informar ao jogador se o número adivinhado é maior, menor ou igual ao número gerado.
    RF05. Contagem de Tentativas: manter um contador de tentativas até o acerto.
    RG06. Opção de Sair: permitir que o jogador encerre o jogo a qualquer momento.
    RF07. Mensagem de Encerramento: exibir uma mensagem de encerramento, informando o número de tentativas realizadas.

    Requisitos Técnicos:
    RT01. Uso de Estruturas de Controle: implementar loops e condicionais para gerenciar o fluxo do jogo.
    RT02. Geração de Números Aleatórios: utilizar a classe ‘Random’ para gerar o número secreto.
    RT03. Tratamento de Exceções: incluir tratamento para entradas inválidas (por exemplo, caracteres não numéricos).
    RT04. Interação com o Usuário: exibir mensagens claras e informativas para guiar o jogador.

    Dica:
    Para escolha do número, o código precisará da bilbioteca da função srand() e rand() da biblioteca stdlib.h
    e da função time() da biblioteca time.h

    Biblioteca stdlib.h: https://petbcc.ufscar.br/stdlib/
    Biblioteca time.h: https://petbcc.ufscar.br/time/
    Ref.: https://cursos.alura.com.br/forum/topico-duvida-rand-srand-e-time-0-327979
*/    
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL,"Portuguese");

  srand(time(NULL));
  int valorMaximo, valorMinimo;

  printf("defina o valor maximo:\n");
  scanf("%d", &valorMaximo);
  printf("Defina o valor minimo\n");
  scanf("%d", &valorMinimo);

  int numeroTentativas = 0, numeroTentado;
  int intervaloNumeros = rand() % (valorMaximo - valorMinimo + 1) + valorMinimo;
  int numeroSecreto = intervaloNumeros;
  int desejaContinuar = 1;

printf("\n");
printf("Bem vindo ao jogo do número secreto!!!");
printf("\n");


  while(numeroTentado  != numeroSecreto){

    printf("Digite um número entre %d e %d, tentativas [%d]", valorMinimo, valorMaximo, numeroTentativas);
    printf("\n");
    scanf("%d", &numeroTentado);
    numeroTentativas += 1;

    if(numeroTentado == numeroSecreto){
      printf("Você acertou o número! com [%d] tentativas!!", numeroTentativas);
      printf("\n");
      printf("Deseja continuar? 1(sim), 2(não):\n");
      scanf("%d", &desejaContinuar);

      if(desejaContinuar == 2){
        printf("obrigado por jogar!! ");
        return 0;
      }

    }else if(numeroTentado > numeroSecreto){
      printf("Número menor");
      printf("\n");

    } else if (numeroTentado < numeroSecreto){
      printf("Número maior");
      printf("\n");
    }
   }
  }


