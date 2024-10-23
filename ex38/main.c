#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(){
  setlocale(LC_ALL,"Portuguese");

  char s1[N] = {"Logica de "};
  char s2[N] = {"Programacao!"};

  printf("Antes de juntar\n");
  printf("s1: %s\n", s1);
  printf("s2: %s\n", s2);

  strcat(s1,s2); //Concatena as strings...

  printf("Depois de juntar!\n");
  printf("Resultado: %s", s1);
  


  return 0;
}