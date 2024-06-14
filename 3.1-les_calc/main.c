#include <stdio.h>

int main()
{
    int sum, subs, mult,  A, B = 0;
    float divis;

    printf("Escreva um NUM:\n");
    fflush(stdin);
    scanf_s("%d", &A);
    printf("Escreva outro NUM:\n");
    scanf_s("%d", &B);

    sum = A + B;
    subs = A - B;
    mult = A * B;
    divis = A / B;

    printf("\n RESULTADOS \n");
    printf("Soma: %d \n", sum);
    printf("Subtr: %d \n", subs);
    printf("Multiplic %d \n", mult);
    printf("Divis %f \n", divis);

    return 0;

}