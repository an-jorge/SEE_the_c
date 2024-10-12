#include <stdio.h>

#define TEXT "Entrada e saida de dados" // Variavel do tipo constante

int main()
{
    printf("%s \n", TEXT);
    int age = 0;
    float height = 0.0;
    char name[50] = "";

#ifdef _WIN32
    printf("Digite a sua idade: \n");
    scanf_s("%d", &age);
    fflush(stdin);
    printf("Digite a sua altura: \n");
    scanf_s("%f", &height);
    fflush(stdin);
    printf("Digite o seu nome: \n");
    scanf_s("%f", &name);
    fflush(stdin);
#else
    printf("Digite a sua idade: \n");
    scanf("%d", &age);
    fflush(stdin);
    printf("Digite sua a altura: \n");
    scanf("%f", &height);
    fflush(stdin);
    printf("Digite o seu nome: \n");
    scanf("%s", name);
    fflush(stdin);
#endif
    printf(" -- Dados informados: -- \n");
    printf("Idade %d \n", age);
    printf("Altura: %.2f \n", height);
    printf("Nome: %s", name);

    return 0;
}
