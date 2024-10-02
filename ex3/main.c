#include <stdio.h>

int main(){
  float nota;

    printf("Insira a nota:\n");
    scanf("%f", &nota);
    if(nota >=7 ) {
      printf("Aprovado(a)!\n");
    } else {
      printf("Reprovado(a)!\n");
    }

    return 0;
}