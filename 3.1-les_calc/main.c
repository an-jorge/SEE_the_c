#include <stdio.h>

int main()
{
    int sum, subs, mult, numb1, numb2 = 0;
    float divis;

#ifdef _WIN32
    printf("Escreva um numero:\n");
    scanf_s("%d", &numb1);
    fflush(stdin);
    printf("Escreva outro numero: \n");
    scanf_s("%d", &numb2);
    fflush(stdin);
#else
    printf("Escreva um numero:\n");
    scanf("%d", &numb1);
    fflush(stdin);
    printf("Escreva outro numero: \n");
    scanf("%d", &numb2);
    fflush(stdin);

#endif

    sum = numb1 + numb2;
    subs = numb1 - numb2;
    mult = numb1 * numb2;
    divis = numb1 / numb2;

    printf("\n RESULTADOS \n");
    printf("Soma: %d \n", sum);
    printf("Subtr: %d \n", subs);
    printf("Multiplic %d \n", mult);
    printf("Divis %f \n", divis);

    return 0;
}