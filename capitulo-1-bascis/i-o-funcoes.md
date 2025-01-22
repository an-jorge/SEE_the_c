# I/O Funções

## Função `printf` <a href="#funcao-printf" id="funcao-printf"></a>

A função `printf` é uma ferramenta essencial na linguagem C para exibir mensagens e dados na tela. Ela oferece flexibilidade para formatar a saída e apresentar informações.

```c
printf(format_string, argument1, argument2);
```

**Componentes:**

* `format_string`: Uma string que define o layout da saída, incluindo texto e especificadores de formato.
* `argument1, argument2, ...`: Uma lista variável de argumentos que fornecem os dados a serem impressos.

```c
printf("Olá, mundo!\n"); // Exibe a mensagem "Olá, mundo!"
printf("O valor de x é %d\n", 10); // Exibe "O valor de x é 10"
printf("Nome: %s, Idade: %d\n", "João", 30); // Exibe "Nome: João, Idade: 30"
```

### &#x20;<a href="#especificadores-de-formato" id="especificadores-de-formato"></a>
