#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main()
{

  // Configura a localidade para Português do Brasil
  if (setlocale(LC_ALL, "pt_BR.UTF-8") == NULL)
  {
    printf(stderr, "Erro ao configurar a localidade para pt_BR.UTF-8\n");
    return 1;
  }

  int celsius = 20;
  int degrees = (celsius * 9 / 5) + 32;
  printf("Temperatura em celsius %d°C \n", celsius);
  printf("Temperatura em fahrenheit %d°F", degrees);

  return 0;
}
