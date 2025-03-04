# `#include <string.h>`

A directiva `#include <string.h>` é usada em C para incluir a biblioteca de manipulação de strings. Essa biblioteca fornece funções para operar com strings, como copiar, concatenar, comparar, determinar o comprimento e buscar substrings, além de manipular blocos de memória.

### **Por que usar `<string.h>`?**

- Simplifica a manipulação de strings e memória.
- Fornece funções optimizadas e seguras para operações comuns.
- Faz parte da biblioteca padrão do C, garantindo portabilidade.

### **Principais funções de `<string.h>`**

Aqui está uma tabela com as funções mais comuns da biblioteca e suas descrições:

| Função                     | Descrição                                                                      | Exemplo de uso                              |
| -------------------------- | ------------------------------------------------------------------------------ | ------------------------------------------- |
| `strlen(str)`              | Retorna o comprimento de uma string (excluindo o caracteres nulo `\0`).        | `strlen("Olá")` → 3                         |
| `strcpy(dest, src)`        | Copia a string `src` para `dest`.                                              | `strcpy(dest, "Texto");`                    |
| `strncpy(dest, src, n)`    | Copia até `n` caracteres de `src` para `dest`.                                 | `strncpy(dest, src, 5);`                    |
| `strcat(dest, src)`        | Concatena a string `src` ao final de `dest`.                                   | `strcat(dest, " Mundo!");`                  |
| `strncat(dest, src, n)`    | Concatena até `n` caracteres de `src` a `dest`.                                | `strncat(dest, src, 3);`                    |
| `strcmp(str1, str2)`       | Compara duas strings lexicograficamente.                                       | `strcmp("abc", "def")` → -1                 |
| `strncmp(str1, str2, n)`   | Compara os primeiros `n` caracteres de duas strings.                           | `strncmp("abc", "abd", 2)` → 0              |
| `strchr(str, c)`           | Retorna um ponteiro para a primeira ocorrência de `c` em `str`.                | `strchr("Texto", 'e')` → ponteiro para `e`  |
| `strrchr(str, c)`          | Retorna um ponteiro para a última ocorrência de `c` em `str`.                  | `strrchr("Texto", 't')` → ponteiro para `t` |
| `strstr(haystack, needle)` | Retorna um ponteiro para a primeira ocorrência de `needle` em `haystack`.      | `strstr("Olá Mundo", "Mundo")`              |
| `memset(ptr, c, n)`        | Preenche os primeiros `n` bytes da memória apontada por `ptr` com o valor `c`. | `memset(array, 0, sizeof(array));`          |
| `memcpy(dest, src, n)`     | Copia `n` bytes de `src` para `dest`.                                          | `memcpy(dest, src, 10);`                    |
| `memcmp(ptr1, ptr2, n)`    | Compara `n` bytes entre `ptr1` e `ptr2`.                                       | `memcmp(arr1, arr2, 5)` → 0 (se iguais)     |

### Exemplo prático

Aqui está um programa que demonstra algumas funções de `<string.h>`:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Olá";
    char str2[] = " Mundo!";
    char str3[50];

    // Comprimento de uma string
    printf("Comprimento de str1: %zu\n", strlen(str1));

    // Concatenação de strings
    strcat(str1, str2);
    printf("Após concatenação: %s\n", str1);

    // Cópia de strings
    strcpy(str3, str1);
    printf("Cópia de str1 para str3: %s\n", str3);

    // Comparação de strings
    if (strcmp(str1, str3) == 0) {
        printf("str1 e str3 são iguais.\n");
    }

    // Busca de substring
    char *ptr = strstr(str1, "Mundo");
    if (ptr) {
        printf("Substring encontrada: %s\n", ptr);
    }

    return 0;
}
```

### **Funções relacionadas à memória**

Além de manipular strings, a biblioteca `<string.h>` também oferece funções para trabalhar directamente com blocos de memória (`memset`, `memcpy`, `memcmp`, etc.). Essas funções são úteis para manipulação de dados binários.

**Exemplo com `memset` e `memcpy`:**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char buffer[10];
    memset(buffer, 0, sizeof(buffer)); // Zera o buffer
    memcpy(buffer, "Texto", 5);        // Copia "Texto" para o buffer

    printf("Buffer: %s\n", buffer);

    return 0;
}
```

### **Cuidados ao usar `<string.h>`**

1. **Overflow de buffer:**
   
   - Ao usar funções como `strcpy` e `strcat`, certifique-se de que o destino possui espaço suficiente.
   - Prefira versões seguras como `strncpy` e `strncat` para evitar problemas.

2. **Ponteiros nulos:**
   
   - Funções como `strchr` e `strstr` retornam ponteiros nulos (`NULL`) se não encontrarem o caracteres ou substring, então sempre verifique o resultado.

3. **Comparação de strings:**
   
   - Não use operadores como `==` para comparar strings. Use `strcmp` ou `strncmp`.