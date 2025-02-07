# Comentários

{% hint style="warning" %}


**No final desta lição, você será capaz de responder ao seguinte**:

* O que são comentários? Por que devo usá-los?
* Como escrevo comentários em C?
{% endhint %}

Não apenas do código de maquina vive um programa, muitas vezes o programador precisa auto entender. Programas são escritos para computadores até este ponto já deves saber, mas às vezes precisamos adicionar um contexto para ajudar outros programadores a ler e entender nosso código.

Comentários são linhas de texto que são ignoradas pelo [compilador ](ciclo-de-desenvolvimento.md#id-3.-compilacao)quando o programa é executado por outro lado é um trufo para entender o que um determinado trecho de código faz.

Geralmente acredita-se que um bom código é autoexplicativo, [há um livro famoso de boas praticas](https://www.amazon.com.br/C%C3%B3digo-limpo-Robert-C-Martin/dp/8576082675) chamando de código limpo ([Clean code](#user-content-fn-1)[^1]). Mas comentários são úteis para explicar por que um programa foi escrito de uma certa maneira.

### Comentário de uma linha

Para escrever um comentário, digite // (duas barras), seguido pelo comentário que deseja adicionar. Tudo depois de // é ignorado até a próxima linha.

{% code lineNumbers="true" %}
```c
  printf("Olá mundo!\n");  // Prints Olá mundo!
  
```
{% endcode %}

Um trecho do código pode ser ignorado por comentários isso é bastante útil quando você não quer que seja executar. Por exemplo, se você está tentando encontrar a causa de um erro no seu código (também chamado de depuração), você pode comentar o código que você quer ter certeza de que não está causando o erro.

```c
// Some code
```



### Muliplos comentários



[^1]: &#x20;O Clean Code refere-se a um estilo de programação que enfatiza a legibilidade, a facilidade de manutenção e a eficiência do _código_.
