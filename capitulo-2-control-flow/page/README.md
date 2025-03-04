# Condição booleana

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





