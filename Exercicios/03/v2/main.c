#include <stdio.h>
#include <locale.h>

int main()
{
    int menu;
    float user_input, degrees;
    setlocale(LC_ALL, "UTF-8");

    printf("|||| ||| |||||| |||||| ||||| |||||||||| \n");
    printf("           TEMPERATURA DO DIA           \n\n");

    printf("TEMPERATURA DO DIA: \n"
           "ESCOLHA \n\n"
           "[1] Celsius °C \n"
           "[2] Fahrenheit °F \n");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("Informe a temperatura em Celsius: \n");
        scanf("%f", &user_input);
        degrees = (user_input * 9 / 5) + 32;
        // Formula    (0°C × 9/5) + 32 = 32°F
        printf("%f°C são %.2f°F \n", user_input, degrees);
        break;

    case 2:
        printf("Informe a temperatura em Fahrenheit \n");
        scanf("%f", &user_input);
        degrees = (user_input - 32) * 5 / 9;
        //  Formula (0°F − 32) × 5/9 = -17.78°C
        printf("%f°F são %.2f °C \n", user_input, degrees);
        break;

    default:
        break;
    }

    return 0;
}

/*

MENU
----

1 - Para C
2 - Para F


*/