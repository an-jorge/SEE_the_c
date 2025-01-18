#include <stdio.h>

int main()
{
    int age = 0;
#ifdef _WIN32
    // For Windows
    print("informe a sua idade: \n");
    scanf_s("%d", &age);

#else
    // Linux
    printf("Informe a sua idade: ");
    scanf("%d", &age);
#endif
    printf("Meus parabens pelos %d anos\n", age);
    return 0;
}