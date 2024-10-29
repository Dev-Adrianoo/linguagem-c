/*
    Escreva um programa que receba 6 numeros inteiros aleatórios.
    O programa deverá ordernar os 6 números de forma crescente e escreve-los na tela.

    Exemplo:
    Entreda:  5 3 4 6 2 1
    Saída:    1 2 3 4 5 6
*/    

#include <stdio.h>
#include <string.h>
#include <time.h>

int main(){

  int arr[6], i, j, auxiliar;

  //números aleatorios
  srand(time(NULL));

  printf("Numeros aleatorios: ");
  for(i = 0; i < 6; i++){
    arr[i] = rand() % 11; // itera 6 vezes para preencher todo o array
    printf("%d ", arr[i]);
  } 
  printf("\n");

  // percorre todo array por "fora"
  for(i = 0; i < 6; i++){
    for(j = 0; j < 5; j++){   // percorre todo array "Interno"
      if(arr[j] > arr[j+1]){
        auxiliar = arr[j];  // guarda o valor de arr[j]
        arr[j] = arr[j+1]; // recebe o valor de arr[j+1]
        arr[j+1] = auxiliar; // arrj[j+1] recebe o valor guarado na auxuliar que é valor de [j]
      }
    }
  }
  
  printf("Ordenados: ");
  for(i = 0; i < 6; i++){
    printf("%d ",arr[i]);
  }
  
  printf("\n");
  return 0;
}