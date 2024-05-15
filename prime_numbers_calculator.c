#include <stdio.h>
#include <windows.h>

int main() {
  int i, j, num, num2, integralDivisionCounter;

  for (i = 0; i < 10; i++) {
    do {
      printf("Insira um numero inteiro positivo: ");
      scanf("%i", &num);

      if (num < 0) {
        printf("Atente-se a especificacao!\n");
      }

/*
      Verifica se a entrada é um número inteiro
      if (!isdigit(num)) {
        printf("Entrada invalida. Digite um numero inteiro.\n");
      }
*/

    } while (num < 0); // Condição atualizada

    integralDivisionCounter = 0;
    for (j = 1; j < num; j++) {
      num2 = num % j;
      if (num2 == 0) {
        printf("O numero %i eh divisivel por %i.\n", num, j);
        integralDivisionCounter += 1;
      }
    }
    printf("E o numero %i eh divisivel por ele mesmo.\n", num);
    if (integralDivisionCounter == 1)
    {
        printf("Portanto, %i eh um numero primo!\n\n");
    }
    else
    {
        printf("Entao, %i NAO eh um numero primo!\n\n");
    }
    
    
  }

  return 0;
}
