# Condição booleana `if``else`

Em C, as instruções `if` e `else` são usadas para controlar o fluxo do programa com base em condições. Elas permitem que você execute diferentes blocos de código dependendo se uma condição é verdadeira ou falsa.

```c
if (condição) {
  // bloco de código a ser executado se a condição for verdadeira
} else {
  // bloco de código a ser executado se a condição for falsa (opcional)
}
```

**Componentes:**

- `condição`: Uma expressão booleana que deve ser avaliada como verdadeira (não zero) ou falsa (zero) para determinar qual bloco de código será executado.
- `bloco de código`: Um conjunto de instruções que serão executadas se a condição for verdadeira (bloco `if`) ou falsa (bloco `else`).

```c
#include <stdio.h>

int main() {
    int numero = 10;

    if (numero > 0) {
        printf("O número é positivo.\n");
    } else {
        printf("O número é negativo ou zero.\n");
    }

    return 0;
}
```

## Instrução `switch`

`switch` em C é usada para realizar uma seleção entre várias alternativas com base no valor de uma expressão. É uma forma mais organizada e eficiente de lidar com múltiplas opções do que uma série de instruções `if` e `else if`. A estrutura básica do `switch` é a seguinte:

```c
switch (expressao) {
    case valor1:
        // Código a ser executado se expressao for igual a valor1
        break;
    case valor2:
        // Código a ser executado se expressao for igual a valor2
        break;
    // Outros casos possíveis...
    default:
        // Código a ser executado se expressao não corresponder a nenhum dos valores anteriores
        break;
}
```

```c
#include <stdio.h>

int main() {
    int opcao = 2;

    switch (opcao) {
        case 1:
            printf("Opção 1 selecionada.\n");
            break;
        case 2:
            printf("Opção 2 selecionada.\n");
            break;
        case 3:
            printf("Opção 3 selecionada.\n");
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
```

Exemplo simples de como usar `switch` em C:

```c
#include <stdio.h>

int main() {
    int option = 2;

    switch (option) {
        case 1:
            printf("Opção 1 selecionada.\n");
            break;
        case 2:
            printf("Opção 2 selecionada.\n");
            break;
        case 3:
            printf("Opção 3 selecionada.\n");
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
```

**Vantagens do uso de switch:**

- **Melhora a legibilidade:** O `switch` torna o código mais organizado e fácil de ler, especialmente quando comparado a longas cadeias de instruções `if-else if`.
- **Manutenção facilitada:** Adicionar ou remover casos é simples, pois cada condição e seu código associado ficam agrupados.
- **Eficiência:** Em alguns casos, o `switch` pode ser mais eficiente que encadeamentos de `if-else if` devido à otimizações realizadas pelo compilador.

**Observações:**

- Os valores nos casos (`case`) devem ser constantes e do mesmo tipo que a expressão sendo avaliada.
- O `break` é crucial para evitar a execução descontrolada de casos subsequentes.
- O bloco `default` é opcional, mas recomendado para lidar com valores inesperados da expressão.

## Instrução `while`

O loop `while` em C que permite executar um bloco de código repetidamente enquanto uma determinada condição permanecer verdadeira. É particularmente útil quando você não sabe de antemão quantas vezes precisa repetir o código ou quando o número de repetições depende de uma condição dinâmica.

```c
#include <stdio.h>

int main() {
    int i = 0; // Inicialização

    while (i < 5) { // Condição: loop até que i chegue a 5
        printf("Valor de i: %d\n", i);
        i++; // Incrementa i para a próxima iteração
    }

    printf("Loop finalizado.\n");
    return 0;
}
```

## Instrução `do-while`

O `do-while` é uma estrutura de controle de repetição, assim como o `while` e o `for`. A diferença é que o `do-while` garante que o bloco de código dentro dele seja executado pelo menos uma vez, mesmo que a condição especificada seja falsa desde o início.

```c
int i = 0;

do {
  printf("Número: %d\n", i);
  i++;
} while (i < 5);```
```

**Vantagens:**

- Garante que o bloco de instruções seja executado pelo menos uma vez, mesmo que a condição seja inicialmente falsa.
- Útil em situações onde a ação precisa ser executada pelo menos uma vez antes de verificar a condição.

**Desvantagens:**

- Pode levar à execução desnecessária do bloco de instruções, caso a condição seja falsa na primeira verificação.
- Requer atenção especial para evitar loops infinitos, pois a condição é testada após a execução do bloco.
