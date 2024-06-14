#include <stdio.h>
int main(void)
{   float exame;
    printf("Insira a nota do exame: \n");
    scanf_s("%f", &exame);

    if (exame >= 7.0)
    {
        printf("APROVADO");
    } 
    else if (exame >= 5.0)
    {
        printf("TEM MAIS UMA OPORTUNIDADE");
    } else
    {
        printf("REPROVADO");
    }
    
    
}