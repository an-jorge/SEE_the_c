#include <stdio.h>

int main()
{
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int iterator;
    float sum = 0;

    for ( iterator = 0; iterator < 7; iterator ++)
    {
        sum += arr[iterator];
    }
    
    printf("RESULTADO DA MEDIA %3.f", sum / 7);
}