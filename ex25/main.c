#include <stdio.h>

int main(){

  int fatorial;

  printf("Digite um numero para calcular fatorial: ");
  scanf("%d", &fatorial);


  for(int i = fatorial-1; i > 0 ; i--){
    fatorial = fatorial * i;
  }

    printf("%d",fatorial);
  
  return 0;
}