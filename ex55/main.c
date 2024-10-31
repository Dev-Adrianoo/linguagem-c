/*
Objetivo:
Desenvolver em C o jogo da velha (Tic-Tac-Toe) utilizando apenas a linha de comando.

Instruções:

Requisitos Funcionais:
RF01 - O jogo deve permitir dois jogadores humanos, que se revezam inserindo os símbolos 'X' e 'O' em um tabuleiro 3x3.
RF02 - Deve haver verificação automática de vitória, empate ou jogadas inválidas.
RF03 - O jogo deve exibir o tabuleiro atualizado após cada jogada e solicitar a próxima entrada do jogador.

Requisitos Técnicos:
RT01 - Utilizar uma matriz 3x3 para representar o tabuleiro do jogo.
RT02 - Implementar toda a lógica do jogo na linha de comando, incluindo a exibição do tabuleiro e a coleta de entradas dos jogadores.
RT03 - Incluir tratamento de exceções para evitar erros em tempo de execução, como inserção em células já ocupadas ou entradas inválidas.
RT04 - Ao final do jogo, exibir uma mensagem indicando o vencedor ou declarando empate, e oferecer a opção de iniciar uma nova partida.

Dicas:
- Use uma matriz bidimensional (char[3][3]) para representar o tabuleiro do jogo, iniciando todas as posições com um caractere especial (como '-') para indicar células vazias.
- Para cada jogada, peça ao jogador para inserir as coordenadas da célula onde deseja colocar seu símbolo (por exemplo, linha e coluna).
- Valide as entradas para garantir que estão nos limites do tabuleiro que a célula escolhida não esteja ocupada.
- Após cada jogada, atualize o tabuleiro e exiba-o novamente no console.
- Verifique as condições de vitória (três símbolos iguais em linha, coluna ou diagonal) ou empate (tabuleiro completo sem vencedor).

entrada = Criar uma matrix [3][3], 3 linhas e 3 colunas
*/

#include <stdio.h>
#include <string.h>
#include<locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");


  char matriz[3][3] = {{'-', '-', '-'},
                      {'-', '-', '-'},
                      {'-', '-', '-'}};
  char jogador1[30], jogador2[30], escolhaJogador1[3];

  printf("Nome do primeiro jogador: ");
  fgets(jogador1, sizeof(jogador1), stdin);
  jogador1[strcspn(jogador1, "\n")] = '\0';

  printf("Nome do segundo jogador: ");
  fgets(jogador2, sizeof(jogador2), stdin);
  jogador2[strcspn(jogador2, "\n")] = '\0';

  printf("Bem vindo Ao jogo da velha\nNome do primeiro jogador: [%s]\nNome do segundo jogador: [%s]\n", jogador1, jogador2);
  printf("Seja Bem Vindos(a)!!\nVamos Começar!");
  printf("\n");


  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("%c ", matriz[i][j]);
    }  printf("\n");
  } printf("\n");

  printf("Digite X ou O, para jogar!!\n");
  printf("Lembrando que você precisa preencher com os indices,\nlinha e coluna!");
  
  printf("\nSua vez: %s,\nEscolhe X ou O: ", jogador1, escolhaJogador1);
  scanf("%s", &escolhaJogador1);
  printf("\n");
  getchar();

  if(strcmp(escolhaJogador1, "X") == 0){
    printf("%s, ficou com X\n\n", jogador1);
    printf("%s, ficou com O", jogador2);
  } else if (strcmp(escolhaJogador1, "O") == 0){
    printf("%s, Ficou com O\n", jogador1);
    printf("%s, Ficou com X\n", jogador2);
  }
  
  return 0;
}

