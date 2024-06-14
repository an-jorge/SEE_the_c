# Ex.03 Celsius Fahrenheit

Faça um algoritmo que leia um valor de temperatura em graus Celsius e a converta para graus Fahrenheit.
Obs: (20**°C** × 9/5) + 32 = 68**°F**

```c
#include <stdio.h>
#include <locale.h>
#include <wchar.h>


int main(){


  // Configura a localidade para Português do Brasil
    if (setlocale(LC_ALL, "pt_BR.UTF-8") == NULL) {
        fprintf_s(stderr, "Erro ao configurar a localidade para pt_BR.UTF-8\n");
        return 1;
    }

    int celsius = 20;
    int degrees = (celsius * 9/5) + 32;
    printf("Temperatura em celsius %dºC \n", celsius);
    printf("Temperatura em fahrenheit %dºF", degrees);

    return 0;
}
```

**Ajuda**
3.0_Lesson.md
