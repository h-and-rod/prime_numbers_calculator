#include <stdio.h>

int main()
{
    int i, input;

    for ( i = 0; i < 10; i++)
    {
        input = -1;
        do
        {
            printf("Insira um numero inteiro positivo: ");
            scanf("%i", &input);
            if (input < 0)
            {
                /* code */
            }
            
        } while (input < 0);
    }
    

    return 0;
}
