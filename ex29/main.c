/*
    Faça um programa que leia um número inteiro e imprima o número com seus dígitos invertidos.
    Se o número inteiro for zero, deverá pedir ao usuário que entre com um valor diferente.
    Exemplo: 1234 vira 4321.
*/

#include <stdio.h>

int main(){

  int nums[4];


  for(int i = 0; i < 4; i++){
    printf("digite os numeros (nao pode ser zero:)", i + 1);
    scanf("%d", &nums[i]);

  while(nums[i] == 0){
    printf("Numeros invalidos! tente de novo: ");
    scanf("%d", &nums[i]);
  }
}
    printf("Numeros invertidos: ");
    for(int i = 3; i>= 0; i--){
      printf("%d", nums[i]);
}
  return 0;
}
