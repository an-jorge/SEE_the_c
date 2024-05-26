# Ex.02 Média

Escreva um algoritmo que leia três notas e calcule e imprima a média aritmética.

```c
#include <stdio.h>

int main(){
    int value1 = 10;
    int value2 = 5;
    int value3 = 8;
    int sum;
    printf("Notas do aluno \n[1]. %d\n[2]. %d\n[3]. %d\n", value1, value2, value3);
    sum = value1 + value2 + value3 / 3;
    printf("A nota media do aluno e %d valores",sum);
    return 0;
}
```

**Ajuda**
3.0_Lesson.md
