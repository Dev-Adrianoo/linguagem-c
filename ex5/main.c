#include <stdio.h>

int main(){
  
  int i= 10;
  
  while(i >= 0){
    printf("%d\n", i);
    i--;
    if(i == 0 ){
      printf("Happy New year ");
    }
  }

  return 0;
}