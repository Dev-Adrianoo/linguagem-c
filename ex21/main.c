#include <stdio.h>

int main(){

  char s[11];

  printf("Digite algo (scanf convencional):\n");
  scanf("%s", s);
  getchar(); //Limpa o '\n' deixado no buffer pelo scanf

  printf("Resultado: %s\n\n", s);

  printf("Digite algo (scanf aprimorado):\n");
  scanf("%10[^\n]s", s);
  getchar();

  printf("Resultado: %s\n\n", s);

  return 0;
}