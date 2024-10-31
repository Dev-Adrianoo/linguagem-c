/* 
  Escreva um programa em c que permita o usuário cadastrar até 10 produtos.
  cada produto deve ter uma descrição, um preço e uma quantidade em estoque.
  o programa deve permitir ao usuário cadastrar produtos, listar todos os produtos cadastrados.
  o programa só poderá ser encerrado quando o usuário escolher a opão de sair em um menu.
*/

#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 10

typedef struct {
  char descricao[15];
  float preco;
  int quantidadeEstoque;
} Produto;

int main(){
  Produto produtos[MAX_PRODUTOS];
  int opcao, contadorProdutos = 0;

  while(1){
    printf("Escolha uma das opções a seguir:\n");
    printf("1. Cadastrar produto\n2. Listar produtos\n3. Sair\n");
    scanf("%d", &opcao);
    getchar();

    switch(opcao){
      if(contadorProdutos == MAX_PRODUTOS) {
        printf("Não há mais espaços para novos produtos. \n");
        break;
      }

      case 1:
          printf("Informe a descrição: ");
          fgets(produtos[contadorProdutos].descricao,sizeof(produtos[contadorProdutos].descricao), stdin);
          produtos[contadorProdutos].descricao[strcspn(produtos[contadorProdutos].descricao, "\n")] = '\0';

          printf("Informe o preço: ");
          scanf("%f", &produtos[contadorProdutos].preco);
          getchar();

          printf("Quantidade em estoque: ");
          scanf("%d", &produtos[contadorProdutos].quantidadeEstoque);
          getchar();

          contadorProdutos++;
          break;
      case 2:
          for (int i = 0; i < contadorProdutos; i++){
            printf("--- Produto %d ---", i + 1);
            printf("Descrição : %s\n", produtos[i].descricao);
            printf("Preço : %.2f\n", produtos[i].preco);
            printf("Quantidade : %d\n", produtos[i].quantidadeEstoque);
          }
          printf("=============================\n");
          break;
      case 3:
          printf("Encerrando o sistema...");
          return 0;
          break;
      default:
        printf("Opção invalida: ");
        break;
    }
  }

  return 0;
}