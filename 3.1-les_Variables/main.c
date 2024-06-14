#include <stdio.h>

#define text "Entrada e saida de dados" // Variavel do tipo constante

int main()
{
    printf("%s \n", text);
    int age = 0;
    float height = 0.0;
    char name[50] = "";
    
    printf("Digite a idade: \n");
    scanf_s("%d", &age);
    printf("Digite a altura: \n");
    scanf_s("%f", &height);
    printf("Digite o nome: \n");
    scanf_s("%s", &name);

    printf(" -- Dados informados: -- \n");
    printf("idade %d \n", age);
    printf("Altura: %.2f \n", height);
    printf("Name: %s", name);
}
