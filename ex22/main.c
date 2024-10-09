#include <stdio.h>
#include <limits.h>

int main(){

  int age;
  int youngerAge = INT_MAX;
  int olderAge = INT_MIN;
  int i;

  for(i= 1; i <=5; i++){
    printf("Enter you age: \n");
    scanf("%d", &age);

    if(age < youngerAge){
      youngerAge = age;

    } else if (age > olderAge){
      olderAge = age;
    } 
  }
      printf("The age of the youngest person: %d \n ", youngerAge);
      printf("The age of the oldest person: %d \n", olderAge);

  return 0;
}