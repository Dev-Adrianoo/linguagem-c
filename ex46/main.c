/*
    Escreva um programa que exiba na tela todas as tabuadas de multiplicação, de 1 a 9:
*/

#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

  int mult;

  printf("Digite um número para receber a tabuada: ");
  scanf("%d", &mult);

  for(int i = 1; i < 10; i++){
    printf("%d x %d = %d\n", mult , i, i * mult);
  }

  return 0;
}