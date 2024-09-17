# `scanf()`

`scanf()` é utilizada para a entrada formatada de dados a partir do fluxo de entrada padrão (normalmente o teclado). Ela é especialmente útil quando você deseja ler dados de entrada formatados, como números inteiros, números de ponto flutuante, caracteres e strings.

> > > Se a entrada não corresponder ao formato especificado ou ocorrer um erro de entrada/saída, `scanf()` retorna EOF (End of File).

```c
#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num); // Lê um número inteiro e o armazena na variável 'num'

    printf("Você digitou: %d\n", num);

    return 0;
}
```

**Observações Adicionais:**

- `scanf` lê entrada do fluxo de entrada padrão (`stdin`), que normalmente se refere ao teclado. Você também pode redireccionar a entrada de um arquivo usando o operador `<`.
- `scanf` retorna o número de itens lidos com sucesso. Se o número for menor que o número de variáveis, indica um erro ou entrada incompleta.
- É crucial combinar os especificadores de conversão na string de formato com os tipos de dados das variáveis para evitar corrupção de dados ou comportamento indefinido.
- `scanf` não é tão segura quanto `fgets` para ler strings, pois não verifica se há estouro de buffer. Considere usar `fgets` para entrada de string e, em seguida, analisar a string separadamente.

## `fgets`

A função `fgets` é usada para ler uma linha de carácter do fluxo de entrada padrão (`stdin`) e armazená-la em uma string. Ela retorna um ponteiro para a string lida ou `NULL` em caso de erro ou fim de arquivo.

```c
char *fgets(char *str, int num, FILE *stream);
```

**Parâmetros:**

- `str`: Um ponteiro para a string onde a linha de caracteres será armazenada.
- `num`: O tamanho máximo da string (incluindo o carácter nulo de terminação `\0`).
- `stream`: Um ponteiro para o fluxo de entrada de onde ler a linha. Geralmente, `stdin` é usado para ler a entrada do teclado.

```c
#include <stdio.h>

int main() {
  char buff[10];
  fgets(buff, sizeof(buff), stdin);
  printf("Você digitou: %s\n", buff);
  return 0;
}
```

## Diferenças entre `fgets` `gets`

Embora ambas as funções leiam strings do fluxo de entrada padrão, existem algumas diferenças importantes:

- **carácter de nova linha**: `fgets` inclui o carácter de nova linha (`\n`) na string lida, enquanto `gets` não.
- **Limite de leitura:** `fgets` permite especificar um limite máximo de carácter a serem lidos, evitando estouro de buffer. `gets` lê até encontrar um caracteres de nova linha ou o fim do arquivo, podendo levar a estouro de buffer se a entrada não for validada.
- **Segurança:** `fgets` é geralmente considerada mais segura que `gets` devido ao seu limite de leitura e menor risco de estouro de buffer.
