#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(){
  setlocale(LC_ALL,"Portuguese");

  char S[N];
  int i;

  printf("Digite um texto: \n");
  fgets(S, sizeof(S), stdin);
  S[strcspn(S, "\n")] = '\0';

  i = strlen(S);
  printf("O tamanho do texto: %d\n\n", i);
  printf("Mostrar um por um :");
  for(i = 0; i < strlen(S); i++){
    printf("%c", S[i]);
  }


  return 0;
}