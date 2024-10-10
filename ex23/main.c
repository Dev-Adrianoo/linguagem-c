#include <stdio.h>

int main(){

  int ano = 2024;

  while(ano > 1990){

    if(ano %2== 0){
      printf("%d\n", ano);
    }
      ano--;
  }

  return 0;
}