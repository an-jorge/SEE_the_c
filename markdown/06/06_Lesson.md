# Função `fgets`

A função `fgets` na linguagem C é usada para ler uma linha de caracteres do fluxo de entrada padrão (`stdin`) e armazená-la em uma string. Ela retorna um ponteiro para a string lida ou `NULL` em caso de erro ou fim de arquivo.

```c
char *fgets(char *str, int num, FILE *stream);
```

**Parâmetros:**

- `str`: Um ponteiro para a string onde a linha de caracteres será armazenada.
- `num`: O tamanho máximo da string (incluindo o caractere nulo de terminação `\0`).
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

- **Caractere de nova linha:** `fgets` inclui o caractere de nova linha (`\n`) na string lida, enquanto `gets` não.
- **Limite de leitura:** `fgets` permite especificar um limite máximo de caracteres a serem lidos, evitando estouros de buffer. `gets` lê até encontrar um caractere de nova linha ou o fim do arquivo, podendo levar a estouros de buffer se a entrada não for validada.
- **Segurança:** `fgets` é geralmente considerada mais segura que `gets` devido ao seu limite de leitura e menor risco de estouros de buffer.
