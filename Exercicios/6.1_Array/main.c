#include <stdio.h>

int main()
{
    int arr[5];
    int i;

    for ( i = 0; i < 5; i++)
    {
        printf("Digite 1 NUM \n");
        scanf_s("%d ", &arr[i]);
    }

    printf("NUM INSERIDOS \n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d \n", arr[i]);
    }
       
}