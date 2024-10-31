/*
  escreva um programa que receba a informação de 5 carros.
  cada carro possui ano, modelo, marca e preço.
  o programa deve retornar ao usuário, o preço do carro depreciado em 10%
  a saida deverá ser marca, modelo, ano, preço inicial e preço depreciado.

*/

#include <stdio.h>
#include <string.h>

typedef struct {
  int ano;
  char modelo[15];
  char marca[15];
  float preco;
} Carro;

int main(){
  Carro carro[5];

  for (int i = 0; i < 5; i++){
    printf("--- Carro %d ---\n", i + 1);
    printf("Informe a marca do carro:\n");
    fgets(carro[i].marca, sizeof(carro[i].marca), stdin);
    carro[i].marca[strcspn(carro[i].marca, "\n")] = '\0';

    printf("Informe a modelo do carro:\n");
    fgets(carro[i].modelo, sizeof(carro[i].modelo), stdin);
    carro[i].modelo[strcspn(carro[i].modelo, "\n")] = '\0';

    printf("Informe o ano:\n");
    scanf("%d",&carro[i].ano);
    getchar();

    printf("informe o preço:\n");
    scanf("%f", &carro[i].preco);
    getchar();
  }

  for(int i = 0; i < 5; i++){
    printf("Marca: %s\n", carro[i].marca);
    printf("Modelo: %s\n", carro[i].modelo);
    printf("Ano: %d\n", carro[i].ano);
    printf("Preço inicial: %.2f\n", carro[i].preco);
    printf("preço depreciado: %.2f\n", carro[i].preco - (carro[i].preco * 0.10));
  }

  return 0;
}