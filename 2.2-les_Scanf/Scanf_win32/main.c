#include <stdio.h>

int main()
{
    float height = 0.0;

#ifdef _WIN32
    // Se estiver no Windows, usa scanf_s
    printf("Enter your height: ");
    scanf_s("%f", &height);
#else
    // Para Linux e outros sistemas, usa scanf
    printf("Enter your height: ");
    scanf("%f", &height);
#endif

    printf("The height: %.2f\n", height);
    return 0;
}
