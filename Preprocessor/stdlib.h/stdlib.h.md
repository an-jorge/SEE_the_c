# `#include <stdlib.h>`

A directiva `#include <stdlib.h>` inclui a **biblioteca padrão de utilitários** em C. Essa biblioteca contém funções úteis para manipulação de memória, conversões de tipos, geração de números aleatórios, gerenciamento de processos e outras operações fundamentais.



### **Funções principais de `<stdlib.h>`**

Aqui estão as categorias e as funções mais comuns disponíveis na biblioteca:

#### **1. Manipulação de memória**

Essas funções alocam e liberam memória dinamicamente:

| Função               | Descrição                                                             | Exemplo de uso                       |
| -------------------- | --------------------------------------------------------------------- | ------------------------------------ |
| `malloc(size)`       | Aloca um bloco de memória de tamanho `size` bytes.                    | `int *p = malloc(10 * sizeof(int));` |
| `calloc(n, size)`    | Aloca um bloco de memória para `n` elementos, inicializando-os com 0. | `int *p = calloc(10, sizeof(int));`  |
| `realloc(ptr, size)` | Redimensiona um bloco de memória previamente alocado.                 | `p = realloc(p, 20 * sizeof(int));`  |
| `free(ptr)`          | Libera a memória alocada por `malloc`, `calloc` ou `realloc`.         | `free(p);`                           |

---

#### **2. Conversões de tipo**

Funções que convertem strings para tipos numéricos:

| Função                      | Descrição                                                                                 | Exemplo de uso                       |
| --------------------------- | ----------------------------------------------------------------------------------------- | ------------------------------------ |
| `atoi(str)`                 | Converte uma string para um inteiro (`int`).                                              | `int x = atoi("123");`               |
| `atof(str)`                 | Converte uma string para um número de ponto flutuante (`double`).                         | `double x = atof("3.14");`           |
| `strtol(str, endptr, base)` | Converte uma string para um número inteiro longo (`long`) com base numérica especificada. | `long x = strtol("FF", NULL, 16);`   |
| `strtod(str, endptr)`       | Converte uma string para `double`, apontando o fim da conversão.                          | `double x = strtod("123.45", NULL);` |

---

#### **3. Geração de números aleatórios**

Funções para gerar números pseudoaleatórios:

| Função        | Descrição                                                              | Exemplo de uso       |
| ------------- | ---------------------------------------------------------------------- | -------------------- |
| `rand()`      | Retorna um número inteiro pseudoaleatório entre `0` e `RAND_MAX`.      | `int x = rand();`    |
| `srand(seed)` | Inicializa o gerador de números aleatórios com uma semente específica. | `srand(time(NULL));` |

---

#### **4. Gerenciamento de processos**

Funções que controlam a execução do programa ou processos:

| Função            | Descrição                                              | Exemplo de uso                      |
| ----------------- | ------------------------------------------------------ | ----------------------------------- |
| `exit(status)`    | Encerra o programa com o código de saída especificado. | `exit(0);`                          |
| `system(command)` | Executa um comando do sistema operacional.             | `system("cls");` ou `system("ls");` |

---

#### **5. Ordenação e busca**

Funções para ordenar e buscar em arrays:

| Função                             | Descrição                                     | Exemplo de uso     |
| ---------------------------------- | --------------------------------------------- | ------------------ |
| `qsort(base, n, size, cmp)`        | Ordena um array usando o algoritmo QuickSort. | Ver exemplo abaixo |
| `bsearch(key, base, n, size, cmp)` | Busca binária em um array ordenado.           | Ver exemplo abaixo |

**Exemplo de uso de `qsort` e `bsearch`:**

```c
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Ordenar o array
    qsort(arr, n, sizeof(int), compare);

    // Imprimir o array ordenado
    printf("Array ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Buscar um valor no array
    int key = 5;
    int *item = bsearch(&key, arr, n, sizeof(int), compare);

    if (item != NULL) {
        printf("Elemento encontrado: %d\n", *item);
    } else {
        printf("Elemento não encontrado\n");
    }

    return 0;
}

```








































