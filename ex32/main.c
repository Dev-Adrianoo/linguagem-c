#include <stdio.h>

int main(){

  int idades[10];

  for(int i = 0; i < 10; i++){
    printf("informe a idade numero %d: ", i + 1);
    scanf("%d", &idades[i]);
  }
}