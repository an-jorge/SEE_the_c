#include <stdio.h>

int main()
{
    char str[10];
    printf("Escreva algo (Leitura pelo fgets): \n");
    fgets(str, 10, stdin);
    puts(str);
    
}