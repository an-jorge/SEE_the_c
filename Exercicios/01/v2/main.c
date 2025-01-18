#include <stdio.h>
#include <locale.h>

int main()
{
    int first_number;
    int second_number;
    int sum_numbers;

    setlocale(LC_ALL, "Portuguese");
    printf("======        ===== \n");
    printf("    +SOMA NÚMEROS\n");
    printf("====== ==== ==== ===== \n");
    printf("Digite o primeiro número: \n");
    scanf("%d", &first_number);
    fflush(stdin);
    printf("Digite o segundo número: \n");
    scanf("%d", &second_number);
    fflush(stdin);

    sum_numbers = first_number + second_number;
    printf("A soma de %d + %d = %d", first_number, second_number, sum_numbers);
    return 0;
}