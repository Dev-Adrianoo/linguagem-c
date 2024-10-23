#include <string.h>
#include <stdio.h>
#include <locale.h>

#define N 50

int main(){
  setlocale(LC_ALL, "Portuguese");

  char hardtext[N] = "senha1234";
  char senha_usr[N];
  int ok;

  printf("enter text: \n");
  fgets(senha_usr, sizeof(senha_usr), stdin);
  senha_usr [strcspn(senha_usr, "\n")] = '\0';

  ok = strcmp(hardtext, senha_usr);
  
  if(ok == 0){
    printf("strings are equal. \n");
  } else {
    printf("strings are different. \n");
  }

  return 0;
}