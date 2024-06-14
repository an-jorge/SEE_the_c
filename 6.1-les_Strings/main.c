#include <stdio.h>

int main()
{
    char str[10];
    printf("Escreva algo (Scanf convecional): \n");
    scanf_s("%s", str);
    fflush(stdin);

    printf("VOCE ESCREVEU: %s \n\n", str);

    /* SCANF CONVECCIONAL corta o TEXTO no 1ª espaco entre TEXTO */
    
    printf("Escreva algo (Scanf aprimorado): \n");
    scanf_s("%9[^\n]s", str);
    fflush(stdin);

    printf("VOCE ESCREVEU: %s \n\n", str);

    /* SCANF APRIMORADO nao corta o TEXTO no espaco entre TEXTO */


}