#include <stdio.h>
#include <string.h>

int main(){

  char cidade[15];

  fgets(cidade, sizeof(cidade) ,stdin);
  cidade[ strcspn(cidade, "\n") ] = '\0'; //troca o "enter pelo \0"
  getchar();

  printf("%s\n e bonito dimaisi", cidade);
  

  return 0;
}