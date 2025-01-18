#include <stdio.h>

int main()
{
    int day;
    printf("Insira o dia da Semana entre 1 a 7\n");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Segunda-feira");
        break;
    case 2:
        printf("Terca-feira");
        break;
    case 3:
        printf("Quarta-feira");
        break;
    case 4:
        printf("Quinta-feira");
        break;
    case 5:
        printf("Sexta-feira");
        break;
    case 6:
        printf("Sabado");
        break;
    case 7:
        printf("Domingo");
        break;
    default:
        break;
    }
}