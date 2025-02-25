# Operadores relacionais e lógicos

Os operadores de relacionais são usados para comparar valores e produzir um resultado booleano (verdadeiro ou falso) com base na comparação. Aqui estão os operadores de comparação mais comuns em C:

1. **Igual a:** `==`
   * Verifica se dois valores são iguais.
2. **Diferente de:** `!=`
   * Verifica se dois valores são diferentes.
3. **Maior que:** `>`
   * Verifica se o valor à esquerda é maior que o valor à direita.
4. **Maior ou igual a:** `>=`
   * Verifica se o valor à esquerda é maior ou igual ao valor à direita.
5. **Menor que:** `<`
   * Verifica se o valor à esquerda é menor que o valor à direita.
6. **Menor ou igual a:** `<=`
   * Verifica se o valor à esquerda é menor ou igual ao valor à direita.

Estes operadores geralmente são usados em expressões condicionais, como em **estruturas de controle de fluxo** (por exemplo, `if`, `else`, `while`, `for`) ou em expressões lógicas mais complexas.

***



**Operadores relacionais** comparam dois valores e retornam um resultado **verdadeiro (1)** ou **falso (0)**.

| Operador | Significado      | Exemplo  | Resultado      |
| -------- | ---------------- | -------- | -------------- |
| `==`     | Igual a          | `5 == 5` | Verdadeiro (1) |
| `!=`     | Diferente de     | `5 != 3` | Verdadeiro (1) |
| `>`      | Maior que        | `5 > 3`  | Verdadeiro (1) |
| `<`      | Menor que        | `5 < 3`  | Falso (0)      |
| `>=`     | Maior ou igual a | `5 >= 5` | Verdadeiro (1) |
| `<=`     | Menor ou igual a | `5 <= 3` | Falso (0)      |



***

## **Operadores Lógicos**

Os **operadores lógicos** são usados para combinar expressões relacionais e tomar decisões mais complexas.

| Operador | Nome             | Descrição                                                                                                                                   | Exemplo                  |
| -------- | ---------------- | ------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------ |
| `&&`     | E lógico (AND)   | Verdadeiro se **ambas** as condições forem verdadeiras                                                                                      | `(5 > 3) && (2 < 4)` → 1 |
| \|\|     | (OU lógico)      | **Verdadeiro (1)** se **pelo menos uma** das condições for verdadeira. Ele só retorna **falso (0)** se **todas as condições** forem falsas. | OU lógico (OR)           |
| `!`      | NÃO lógico (NOT) | Inverte o valor lógico                                                                                                                      | `!(5 > 3)` → 0           |



