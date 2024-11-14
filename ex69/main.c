#include <stdio.h>

int main(){

    int vetor[5];

    for(int i = 0; i < 5; i++){
        printf("Endereco da variável no indice &d = %p\n", i ,&vetor[i]);
        scanf("%d", &vetor[i]);
    }

    return 0;
}