/*
  Escreva um programa em C, que receba a idade de uma pessoa.
  Se essa pessoa tiver 18 anos, ela é uma pessoa adulta.
  se ela tiver 15, é adolescente se tiver 8, é criança.
*/

#include <stdio.h>

int main(){

  int age;
  float money = 50.0;

  printf("Enter you age: ");
  scanf("%d", &age);

  switch(age) {
    case 18:
      printf("You are of legal age.\n");

      if(money >= 20.0){
        printf("2 packs of snacks");
      }
      break;
    case 15:
      printf("adolescent!\n");
      break;
    case 8:
      printf("Kid! \n");
      break;
    default:
      printf("invalid option!");
  } 
  return 0;
}
