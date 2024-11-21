
/*

TAREFA
   - Altere do `if-else` para `while` ou `do-while`
*/

#include <stdio.h>

int main()
{
    int number;
    int actived = 1; // boolean true "Loop started"

    printf("|||| ||| |||||| PAR OU IMPAR |||||| ||||| |||||||||| \n\n");
    printf("Digite 110 para SAIR do programa \n");

    printf("Informe um número: \n");
    scanf("%d", &number);
    while (actived)
    {

        if (number == 110)
        {
            printf("PROGRAMA TERMINADO\nOBRIGADO ATÉ BREVE! \n");
            actived = 0; // boolean false "End of loop"
        }

        else if (number % 2 == 0)
        {
            printf("O %d é um número PAR\n\n", number);
        }

        if (actived)
        {
            printf("Informe um outro número:\n");
            scanf("%d", &number);
        }
        else if (number % 2 == 1)
        {
            printf("O %d é um número IMPAR\n\n", number);
        }
    }

    return 0;
}
