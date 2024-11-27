#include <stdio.h>

int main()
{
    int array[5];
    int items;

    for (items = 0; items < 5; items++)
    {
        printf("Digite Um número\n");
        scanf("%d ", &array[items]);
    }

    printf("Números inseridos\n");
    for (items = 0; items < 5; items++)
    {
        printf("%d \n", array[items]);
    }
}