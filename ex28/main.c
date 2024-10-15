/*
    Escreva um código que exiba na tela um menu com as opções:

    1. Somar 2 numeros
    2. Multiplicar 2 numeros
    3. Encerrar

    O programa só poderá ser finalizado quando o usuário escolher a opção 3

    input = pedir ao usuario um número
    process = caso seja 1 , somar 2 numeros caso seja 2 multiplicar os números e 3 acaba o programa
    output = mostrar o resultado. 
*/

#include <stdio.h>

int main(){

    int num1, num2, soma = 0, mult = 0, resp;

  while(resp != 3){

    printf("1 para somar os numeros\n2 para multiplicar os numeros\n3 caso deseja encerrar o programa:\n");
    scanf("%d", &resp);

    if (resp == 3){
      printf("Encerrando programa...");
      break;
    }

    printf("enter with one number:\n");
    scanf("%d", &num1);

    printf("enter with one number:\n");
    scanf("%d", &num2);


    switch(resp){
      case 1:
        soma = num1 + num2;
        printf("resultado soma: %d\n\n", soma);
        break;
      case 2:
        mult = num1 * num2;
        printf("Resultado mult: %d\n\n", mult);
        break;
      default:
        printf("Numero digitado fora do contexto: digite 1,2 ou 3...");
    }
  }
    return 0;
}