#include <stdio.h>

int main() {

  int number1, number2, SomaImpares = 0;

  printf("Digite um numero: ");
  scanf("%d", &number1);

  printf("Digite outro numero: ");
  scanf("%d", &number2);

  if (number1 > number2) {
    int auxiliar = number1;
    number1 = number2;
    number2 = auxiliar;
  } else if (number1 == number2) {
    printf("Ambos os numeros sao iguais, e nao ha como calcular os impares entre eles\n");
    return 0;
  }

  for (int i = number1 + 1; i < number2; i++) {
    if (i % 2 != 0) {
      SomaImpares += i;
      printf("%d ", i);
    }
  }
  
  printf("\nSoma dos impares: %d\n", SomaImpares);

  return 0;
}
