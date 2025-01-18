# Ordem de precedência dos operadores

Em C, assim como em muitas outras linguagens de programação, a ordem de avaliação dos operadores matemáticos segue a convenção padrão da matemática. Aqui está a ordem de precedência dos operadores matemáticos em C, da mais alta para a mais baixa:

1. **Parênteses**: Expressões dentro de parênteses são avaliadas primeiro.
2. **Multiplicação (\*) e Divisão (/)**: Multiplicação e divisão têm a mesma prioridade e são avaliadas da esquerda para a direita.
3. **Adição (+) e subtracção (-)**: Adição e subtracção têm a mesma prioridade e são avaliadas da esquerda para a direita.

Quando há operadores com a mesma precedência, a avaliação ocorre da esquerda para a direita.

**Dicas para usar operadores relacionais:**

* Utilize os operadores relacionais para comparar valores e tomar decisões em seu programa.
* Lembre-se da precedência dos operadores para evitar erros de lógica.
* Utilize parênteses para alterar a ordem de execução das operações, se necessário.

É sempre importante lembrar da precedência dos operadores, que define a ordem em que as operações são realizadas em uma expressão.

***



#### T**abela de Precedência (Principais Operadores)**

<table data-full-width="true"><thead><tr><th>Precedência (Alta → Baixa)</th><th>Operadores</th><th>Associatividade</th></tr></thead><tbody><tr><td>1</td><td><code>()</code> (parênteses), <code>[]</code>, <code>-></code>, <code>.</code></td><td>Esquerda para direita</td></tr><tr><td>2</td><td><code>!</code>, <code>~</code>, <code>++</code>, <code>--</code>, <code>+</code> (unário), <code>-</code></td><td>Direita para esquerda</td></tr><tr><td>3</td><td><code>*</code>, <code>/</code>, <code>%</code></td><td>Esquerda para direita</td></tr><tr><td>4</td><td><code>+</code>, <code>-</code></td><td>Esquerda para direita</td></tr><tr><td>5</td><td><code>&#x3C;</code>, <code>&#x3C;=</code>, <code>></code>, <code>>=</code></td><td>Esquerda para direita</td></tr><tr><td>6</td><td><code>==</code>, <code>!=</code></td><td>Esquerda para direita</td></tr><tr><td>7</td><td><code>&#x26;&#x26;</code></td><td>Esquerda para direita</td></tr><tr><td>8</td><td>`</td><td></td></tr><tr><td>9</td><td><code>=</code> (atribuição), <code>+=</code>, <code>-=</code>, <code>*=</code> etc.</td><td>Direita para esquerda</td></tr></tbody></table>
