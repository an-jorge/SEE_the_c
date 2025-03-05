---
layout:
  title:
    visible: true
  description:
    visible: false
  tableOfContents:
    visible: true
  outline:
    visible: true
  pagination:
    visible: true
---

# Introdução às Instruções if e else

Na programação as instruções `if` e `else` são usadas para controlar o fluxo do programa com base em condições. Assim como na vida, as condições permitem que você execute diferentes blocos de código dependendo se uma condição é verdadeira ou falsa.

***



{% code overflow="wrap" %}
```c
if (condição) {
  // bloco de código a ser executado se a condição for verdadeira
} else {
  // bloco de código a ser executado se a condição for falsa (opcional)
}
```
{% endcode %}

{% hint style="info" %}
### Saiba mais

`condição`: Uma expressão booleana que deve ser avaliada como verdadeira (não zero) ou falsa para determinar qual bloco de código será executado.

`bloco de código`: Um conjunto de instruções que serão executadas se a condição for verdadeira (bloco `if`) ou falsa (bloco `else`).
{% endhint %}



{% code overflow="wrap" %}
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
{% endcode %}



***

## Introdução à Instrução `else-if`&#x20;

A instrução `else if` é usada quando você precisa verificar **múltiplas condições** em um programa. Ela é uma extensão da estrutura `if-else` e permite adicionar várias condições intermediárias antes de chegar ao bloco `else`.

***

{% hint style="info" %}
## Saiba mais

O programa verifica as condições na ordem em que aparecem.

Assim que uma condição for verdadeira 1, o bloco correspondente será executado e o restante será ignorado.

O bloco `else` é opcional e será executado apenas se **nenhuma das condições anteriores for verdadeira**.
{% endhint %}

{% code overflow="wrap" %}
```c
```
{% endcode %}

