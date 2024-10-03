#include <stdio.h>

/*
  Escreva um programa em C que converta a temperatura de Celsius para Fahrenheit.

  F = c*1,8 + 32
*/

int main(){

    float celsius, fahrenheit;

    printf("Informe o valor da temperatura:\n ");
    scanf("%f", &celsius);

    fahrenheit = celsius * 1.8 + 32;

    printf("Temperatura convertida: %.2f\n ", fahrenheit);


    return 0;
}