/*
    Escreva uma "calculadora" que faça as 4 operações aritméticas.
    O usuário deverá escolher qual operação quer fazer e fornecer 2 números.
    Cada operação deverá ser uma sub-rotina.
*/

#include <stdio.h>

int Entrada()
{
  int n;
  printf("Digite um numero:\n");
  scanf("%d", &n);
  getchar();
  return n;
}

int Somar(int a, int b)
{
  return a + b;
}

int Subtrair(int a, int b)
{
  return a - b;
}

float Dividir(float a, float b)
{
  if (b == 0)
  {
    printf("Dividendo nao pode ser dividido por 0\n");
    return 0;
  }
  else
  {
    return a / b;
  }
}

int Multiplicar(int a, int b)
{
  return a * b;
}

int main()
{
  int opcao, num1, num2;

  while (1)
  {

    printf("\n---- Bem vindo a sua calculadora feita com funcoes! -----\n");
    printf("Escolha\n1. somar\n2. subtrair\n3. dividir\n4. multiplicar\n5. Sair\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1: // somar
      num1 = Entrada();
      num2 = Entrada();
      printf("Soma: %d\n", Somar(num1, num2));
      break;
    case 2: // subtrair
      num1 = Entrada();
      num2 = Entrada();
      printf("Subtracao: %d\n", Subtrair(num1, num2));
      break;
    case 3: // dividir
      num1 = Entrada();
      num2 = Entrada();
      printf("Divisao: %.2f\n", Dividir(num1, num2));
      break;
    case 4: // multiplicar
      num1 = Entrada();
      num2 = Entrada();
      printf("Multiplicacao: %d\n", Multiplicar(num1, num2));
      break;
    case 5: // sair do programa
      printf("---- Saindo do programa----\n");
      return 0;
    default:
      printf("Opcao invalida!\n");
      break;
    }
  }
}