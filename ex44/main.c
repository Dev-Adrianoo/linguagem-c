#include <stdio.h>
#include <string.h>
#include <locale.h>

#define Tamanho 50

struct tipo_pessoa {
    char nome[Tamanho];
    int idade;
    float peso;
};

// chamando typedef pra definir o nome da variavel a ser chamada
typedef struct tipo_pessoa pessoa1;


int main(){
  setlocale(LC_ALL, "Portuguese");


  // chamando pessoa1 com o tipos que possuem nela
  pessoa1 tipo = {"Adriano", 19, 75.5};

  printf("Inicio: \n");
  printf("Nome: %s\n", tipo.nome);
  printf("Idade: %d\n", tipo.idade);
  printf("Peso: %.2f\n\n\n", tipo.peso);

  //Novos valores
  tipo.idade = 20;
  tipo.peso = 80.00;
  strcpy(tipo.nome, "Adriano Souza"); // troca o nome de origem para destino

  printf("Campos alterados...\n");
  printf("Nome: %s\n", tipo.nome);
  printf("Idade: %d\n", tipo.idade);
  printf("Peso: %.2f\n", tipo.peso);

  return 0;
}