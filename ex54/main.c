/*
  Escreva um programa que cadastre um cliente.
  cliente tem:
  - Nome:
  - cpf:
  - E-mail
  -endereço
Endereço tem:
  -Rua
  -Numero
  -Bairro
*/

#include <stdio.h>
#include <string.h>

struct Endereco {
  char rua[30];
  int numero;
  char bairro[30];
};

struct Cliente {
  char nome[50];
  char cpf[15];
  struct Endereco endereco;
};

int main(){
  struct Cliente cliente;

  printf("Nome: ");
  fgets(cliente.nome, sizeof(cliente.nome), stdin);
  cliente.nome[strcspn(cliente.nome, "\n")] = '\0';

  printf("CPF: ");
  fgets(cliente.cpf ,sizeof(cliente.cpf), stdin);
  cliente.cpf[strcspn(cliente.cpf, "\n")] = '\0';

  printf("Endereço: ");
  fgets(cliente.endereco.rua, sizeof(cliente.endereco.rua), stdin);
  cliente.endereco.rua[strcspn(cliente.endereco.rua, "\n")] = '\0';

  printf("Rua: ");
  fgets(cliente.endereco.rua, sizeof(cliente.endereco.rua), stdin);
  cliente.endereco.rua[strcspn(cliente.endereco.rua, "\n")] = '\0';

  printf("Bairro: ");
  fgets(cliente.endereco.bairro, sizeof(cliente.endereco.bairro), stdin);
  cliente.endereco.bairro[strcspn(cliente.endereco.bairro, "\n")] = "\0";
  printf("\n");

  printf("Nome: %s\n", cliente.nome);
  printf("CPF: %s\n", cliente.cpf);
  printf("Endereço: %s\n", cliente.endereco);
  printf("Rua: %d\n", cliente.endereco.rua);
  printf("Bairro: %s\n", cliente.endereco.bairro);

  return 0;
}