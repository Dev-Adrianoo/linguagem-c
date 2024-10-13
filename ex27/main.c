#include <stdio.h>

int main(){

    int A, B, result = 1;

    printf("Enter the first value:\n");
    scanf("%d", &A);

    printf("Enter the second value: \n ");
    scanf("%d", &B);

    for(int i = 1; i <= B ; i++){
        result *= A;
    }

    if(B != 0){
        printf("Result: %d", result);
    }

    return 0;
}