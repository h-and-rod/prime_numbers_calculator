#include <stdio.h>
#include <windows.h>

int main() {
  int i, j, num, num2, integralDivisionCounter;

  for (i = 0; i < 10; i++) {
    do {
      printf("Insira um numero inteiro positivo: ");
      scanf("%i", &num);

      if (num < 0) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),78); 
        printf("Atente-se a especificacao!\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15); 
      }

    } while (num < 0);

    integralDivisionCounter = 0;
    for (j = 1; j < num; j++) {
      num2 = num % j;
      if (num2 == 0) {
        printf("O numero %i eh divisivel por %i.\n", num, j);
        integralDivisionCounter += 1;
      }
    }
    printf("E o numero %i eh divisivel por ele mesmo.\n", num);
    
    if (integralDivisionCounter <= 1)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10); 
        printf("Portanto, %i eh um numero primo!\n\n", num);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15); 
    }
    else
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12); 
        printf("Entao, %i NAO eh um numero primo!\n\n", num);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15); 
    }
    
    
  }

  return 0;
}
