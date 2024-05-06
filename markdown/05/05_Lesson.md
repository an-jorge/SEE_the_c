# Instrução `while`

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

## Instrução `for`

O loop `for` é uma estrutura de repetição fundamental na linguagem C. Ele permite executar um bloco de código várias vezes, de forma controlada.

```c
for (inicialização; condição; incremento) {
  // bloco de código a ser repetido
}
```

- **inicialização:** Esta expressão é executada apenas uma vez, no início do loop. É comum usada para inicializar uma variável de controle que será utilizada para contar o número de iterações.
- **condição:** Esta expressão é avaliada antes de cada iteração do loop. Se a condição for verdadeira, o bloco de código é executado. Se a condição for falsa, o loop termina.
- **incremento:** Esta expressão é executada após cada iteração do loop. É comum usada para atualizar a variável de controle para a próxima iteração.

```c
#include <stdio.h>

int main() {
  int i;

  for (i = 1; i <= 5; i++) {
    printf(" repetição número %d\n", i);
  }

  return 0;
}
```

## Instrução `continue` e `break`

`continue` e `break` são utilizados para alterar o fluxo de execução dentro de laços de repetição (`for`, `while`, `do-while`) e também no comando `switch-case` em C.

- **`break`:**
  
  - Interrompe imediatamente o loop de repetição em que está inserido.
  - O programa continua a execução a partir da instrução seguinte ao loop.

- **`continue`:**
  
  - Interrompe a iteração atual do loop de repetição em que está inserido.
  - O programa pula para a avaliação da condição do loop e, se verdadeira, executa a próxima iteração.

Exemplo demonstrando o uso de `break` e `continue`:

```c
  #include <stdio.h>

int main() {
  for (int i = 1; i <= 10; i++) {
    if (i == 5) {
      break; // Sai do loop quando i for igual a 5
    }
    if (i % 2 == 0) {
      continue; // Pula para a próxima iteração se i for par
    }
    printf(" repetição ímpar número %d\n", i);
  }

  return 0;
}

```
