#include <stdio.h>

int main(){

  int idades[2][2];

 

 for(int i = 0; i < 2; i++)
 {
    for(int j = 0; j <2; j++){
      printf("informe uma idade: ");
      scanf("%d", &idades[i][j]);
    }
 }

for(int i = 0; i < 2; i++)
{
    for(int j = 0; j < 2; j++){
      scanf("%d", &idades[i][j]);
    }
 }


  return 0;
}