#include <stdio.h>

int main(){

    int idade;
    float salario;
    char sexo;

    idade = 19;
    salario = 20.00;
    sexo = 'M';

    printf("Tenho %d anos\n", idade);
    printf("Recebo $%.2f\n", salario);
    printf("Sou do sexo: %c\n", sexo);

    return 0;
}