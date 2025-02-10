# Operadores matemáticos

Sobre os operadores matemáticos

Operadores matemáticos são símbolos usados na linguagem C para realizar cálculos com variáveis e valores numéricos. Eles se comportam de maneira similar aos operadores matemáticos que você já conhece da álgebra.

1. Adição: `+`
2. subtracção: `-`
3. Multiplicação: `*`
4. Divisão: `/`
5. Módulo (resto da divisão): `%`
6. Incremento: `++`
7. Decremento: `--`

### 1.  Adição `+`

Na programação de forma geral, o operador de adição é o símbolo **+**. Ele é usado para somar dois ou mais valores, sejam eles números inteiros, números de ponto flutuante ou até mesmo caracteres.

```
result = value + value2;
```

onde:

* `result` é a variável que irá armazenar o resultado da soma.
* `value` e `value2` são os valores que serão somados.

```c
int value = 10;
int value2 = 5;
int result = value + value2; // soma será igual a 15
```

{% code overflow="wrap" %}
```c
char c1 = 'A';
char c2 = 'B';
int soma = c1 + c2; // soma será igual a 131 (valor ASCII de 'A' + valor ASCII de 'B')
```
{% endcode %}



***



{% hint style="info" %}
\
**Observações importantes:**

* O operador de adição pode ser usado com qualquer tipo de dado numérico em C, incluindo `int`, `float`, `double`, `char`, etc.
* Quando os operandos são de tipos diferentes, o C realiza conversões automáticas para um tipo comum antes de realizar a soma.
* O operador de adição também pode ser usado para concatenar strings em C, mas para isso é necessário usar funções específicas da [**biblioteca string.h**](#user-content-fn-1)[^1], como `strcat`.
{% endhint %}

***

### 2. Subtracção: `-`

A **subtração em C** é feita usando o operador de subtração `-`, assim como fazemos na matemática. Aqui estão alguns exemplos práticos:

{% code overflow="wrap" %}
```c
#include <stdio.h>

int main() {
    int a = 10;
    int b = 4;
    int result = a - b;

    printf("Resultado da subtração: %d\n", result);  // Saída: 6
    return 0;
}

```
{% endcode %}



***

#### **Subtração com números de ponto flutuante (`float`)**

```c
#include <stdio.h>

int main() {
    float x = 5.5;
    float y = 2.2;
    float resultado = x - y;

    printf("Resultado da subtração: %.2f\n", resultado);  // Saída: 3.30
    return 0;
}

```



[^1]: 

    **O que é a biblioteca string.h?**\


    A biblioteca `string.h` é uma parte fundamental da linguagem de programação C. Ela fornece um conjunto de funções que permitem manipular strings (cadeias de caracteres) de maneira eficiente. Essas funções são indispensáveis para realizar diversas tarefas, como:

    * **Copiar:** Copiar uma string para outra.
    * **Concatenar:** Juntar duas ou mais strings.
    * **Comparar:** Verificar se duas strings são iguais ou diferentes.
    * **Buscar:** Encontrar uma substring dentro de uma string.
    * **Calcular o comprimento:** Determinar o número de caracteres em uma string.
    * **Converter:** Converter strings para outros tipos de dados (e vice-versa).

    **Por que usar a biblioteca string.h?**

    * **Eficiência:** As funções da biblioteca `string.h` são otimizadas para realizar operações com strings de forma rápida.
    * **Conveniência:** Ao invés de implementar manualmente algoritmos para manipular strings, você pode utilizar as funções prontas da biblioteca.
    * **Padronização:** As funções da biblioteca `string.h` são parte da biblioteca padrão do C, o que garante compatibilidade entre diferentes compiladores.
