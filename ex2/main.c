#include <stdio.h>


int main(){
  int num1, num2, resultado;

  printf("Digite um numero:\n ");
  scanf("%d", &num1);

  printf("Digite outro numero:\n ");
  scanf("%d", &num2);

  resultado = num1 + num2;

  if(num1 == 0 && num2 == 0){
    printf("Numeros entregues igual a 0!\n tente outro numero e tente novamente!\n");
  }
  else
      printf("Resultado: %d\n", resultado);
  
  return 0;
}

