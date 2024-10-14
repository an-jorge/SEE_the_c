#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Olá mundo, agora os acentos em Português começarão a surgir \n");
    printf("Incluindo caracteres especiais $ & ^ * @ $ ' ; ~ º ç `  \n");
}