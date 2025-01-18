#include <stdio.h>

#define TEXT "MEDIA FINAL DO ALUNO" // Variavel do tipo constante

int main()
{
    printf("%s \n", TEXT);
    printf("QUAL NOTA DO ALUNO: \n");
    float result = 0;
#ifdef _WIN32
    scanf_s("%s", &result);
    fflush(stdin);
#else
    scanf("%f", &result);
    fflush(stdin);
#endif

    if (result > 10.0)
    {
        printf("APROVADO \n");
    }
    else
    {
        printf("REPROVADO \n");
    }

    printf("SUA NOTA %.1f", result);

    return 0;
}

// TEXT "MEDIA FINAL DO ALUNO";