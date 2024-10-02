#include <stdio.h>

int main(){
  
  int idade;
  float salario;
  char sexo[10];

  printf("Digite sua idade: \n");
  scanf("%d", &idade);

  printf("Digite seu salario: ");
  scanf("%f", &salario);

  printf("Digite seu sexo: ");
  scanf("%s", sexo);

  printf("dados recebidos -> \n idade:%d \n salario:%.2f \n sexo:%s \n", idade, salario, sexo);

  return 0;
}