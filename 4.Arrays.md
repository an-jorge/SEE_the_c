# Array

Arrays, também conhecidos como vectores, são uma das estruturas de dados mais importantes e versáteis. Eles permitem armazenar uma colecção de valores do mesmo tipo, de forma eficiente e organizada.

- Exemplo de declaração array

```c
#include <stdio.h>

int main() {
    // Declarando um array de inteiros com 5 elementos
    int numbers[5];

    // Atribuindo valores ao array
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    // Acessando e imprimindo valores do array
    printf("Elemento 0: %d\n", numbers[0]);
    printf("Elemento 1: %d\n", numbers[1]);
    printf("Elemento 2: %d\n", numbers[2]);
    printf("Elemento 3: %d\n", numbers[3]);
    printf("Elemento 4: %d\n", numbers[4]);

    return 0;
}
```

Além disso, você pode inicializar um array ao declará-lo, como mostrado no exemplo abaixo:

```c
int numbers[5] = {10, 20, 30, 40, 50};
```

Neste caso, o array é declarado e inicializado com os valores especificados entre chaves.
