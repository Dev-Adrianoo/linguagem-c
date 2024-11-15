/*
    Escreva um programa que calcule a area de um quadrado.
*/

#include <stdio.h>

void entradaDados(float *pLado){
    printf("Informe a medida do lado: ");
    scanf("%f", pLado);

}

void calcularArea(float *pArea){
    float lado;
    entradaDados(&lado);

    *pArea = lado * lado;
}


int main(){

    float area;

    calcularArea(&area);

    printf("Area = %.2f", area);

    return 0;
}