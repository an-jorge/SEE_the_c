# Operador atribuição

## Introdução ao operadores atribuição <a href="#operadores-atribuicao" id="operadores-atribuicao"></a>

O operador de atribuição básico é o sinal de igual (`=`), mas existem também operadores compostos de atribuição que facilitam a manipulação e atualização do valor das variáveis. Os operadores de atribuição são usados para atribuir valores a variáveis, aqui estão os operadores de atribuição mais comuns em C:

1. **Atribuição simples:** `=`
   * Atribui o valor à direita do operador à variável à esquerda.
2. **Atribuição com soma:** `+=`
   * Adiciona o valor à direita à variável à esquerda e atribui o resultado à variável à esquerda.
3. **Atribuição com substrução:** `-=`
   * Subtrai o valor à direita da variável à esquerda e atribui o resultado à variável à esquerda.
4. **Atribuição com multiplicação:** `*=`
   * Multiplica o valor à direita pela variável à esquerda e atribui o resultado à variável à esquerda.
5. **Atribuição com divisão:** `/=`
   * Divide o valor à esquerda pela variável à direita e atribui o resultado à variável à esquerda.
6. **Atribuição com módulo:** `%=`
   * Calcula o módulo do valor à esquerda pela variável à direita e atribui o resultado à variável à esquerda.

{% code overflow="wrap" fullWidth="false" %}
```c
int x = 10;
x += 5;     // x agora é 15 (10 + 5)
x -= 3;     // x agora é 12 (15 - 3)
x *= 2;     // x agora é 24 (12 * 2)
x /= 4;     // x agora é 6 (24 / 4)
x %= 2;     // x agora é 0 (6 % 2)
```
{% endcode %}

{% hint style="info" %}
## Saiba mais:

É importante lembrar da precedência dos operadores, que define a ordem em que as operações são realizadas em uma expressão. Para mais detalhes confira a ordem de [precedência dos operadores.](ordem-de-precedencia-dos-operadores.md)
{% endhint %}

***



{% hint style="warning" %}
### ✏️  **Actividades de aprendizagem**:

Diga a importancia de uso de um dos operadores de atribuição&#x20;
{% endhint %}

