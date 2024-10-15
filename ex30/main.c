#include <stdio.h>

int main(){

    int num1, resto, invertidoNumero = 0;

    do {
      printf("Digite um numero inteiro: ");
      scanf("%d", &num1);

      if(num1 == 0) {
        printf('Informe um valor diferente de zero: ');
      }

    } while (num1 == 0);
    
      while(num1 !=0){
        resto = num1 % 10; //Divide num1 por 10 e amarzena o resto da divisão na variável resto. Exemplo: 1234 / 10 = 123, resto 4
        invertidoNumero = invertidoNumero * 10 + resto; // variavel "invertido" recebe ela mesma multiplicado por 10 e o resultado soma com a variavel resto
        num1 /=10; //Divide "num1" por 10, eliminando o ultimo digito pois se trata de numeros inteiros e não possui virgula. Exemplo 1234/10 = 123.4
      }
    
    printf("%d", invertidoNumero);

  return 0;
}