# Directivas de pré-processador

Em C, **directivas de pré-processador** são instruções especiais que começam com o carácter `#` e são processadas pelo **pré-processador** antes da compilação. O pré-processador é uma etapa anterior à compilação que realiza diversas operações no código-fonte, como inclusão de arquivos, substituição de macros, e controle condicional de compilação.

### **O que são directivas de pré-processador?**

Directivas de pré-processador são comandos que fornecem instruções ao pré-processador. Elas não geram código executável, mas alteram o código-fonte antes de ser enviado ao compilador.

As directivas incluem:

1. **Inclusão de arquivos**: Adiciona o conteúdo de outros arquivos ao código-fonte.
   - Exemplo: `#include <stdio.h>`
2. **Definição de macros**: Substitui identificadores por valores ou código.
   - Exemplo: `#define PI 3.14`
3. **Condicional de compilação**: Permite compilar partes específicas do código com base em condições.
   - Exemplo: `#ifdef DEBUG`
4. **Outros comandos**: Como `#undef`, `#pragma` e outros.

### **O que o pré-processador faz?**

O pré-processador executa as directivas antes que o compilador processe o código. Ele realiza as seguintes tarefas principais:

1. **Inclusão de arquivos:**
   
   - Insere o conteúdo de arquivos de cabeçalho no local onde a directiva `#include` aparece.
     
     ```c
     #include <stdio.h>
     // Copia o conteúdo de `stdio.h` para o código antes da compilação.
     ```

2. **Substituição de macros:**
   
   - Substitui macros definidas pelo programador usando #define.
     
     ```c
     #define PI 3.14
     printf("O valor de PI é %.2f\n", PI); 
     // Substitui PI por 3.14.
     ```

3. **Condicional de compilação**:
   
   - Permite incluir ou excluir partes do código com base em condições.
     
     ```c
     #include <stdio.h>
     #ifdef DEBUG
     printf("Modo de depuração ativado.\n");
     #endif
     ```

4. **Criação de código multi-plataforma:**
   
   - Permite criar programas que podem ser compilados em diferentes sistemas operacionais.
     
     ```c
     #ifdef _WIN32
     printf("Código para Windows.\n");
     #else
     printf("Código para outro sistema.\n");
     #endif
     ```
5. **Remoção de definições (#undef):**

      ```c
      #define TAMANHO 100
      #undef TAMANHO
     ```

### **Por que usar? `#include <stdio.h>`**

- Ele fornece a definição de funções como:
  
  - `printf()`: Para exibir texto no terminal.
  - `scanf()`: Para ler entrada do usuário.
  - `putchar()`: Para escrever um carácter.
  - `gets()`: (obsoleto) Para ler uma string.
  - `fopen()`, `fclose()`, etc.: Para manipulação de arquivos.

- O **pré-processador** copia o conteúdo do arquivo `stdio.h` para o código-fonte.

- Durante a **compilação**, o compilador verifica o código para garantir que você está usando as funções correctamente (por exemplo, chamando `printf()` com os argumentos correctos).

- Na fase de **linkagem**, o compilador liga seu programa às implementações reais de `printf()` e outras funções, que estão na biblioteca padrão (`libc` no caso do C).

Em C, a directiva `#include <stdio.h>` é usada para incluir o cabeçalho (**header file**) da biblioteca padrão de entrada e saída (**Standard Input/Output Library**) no programa. Esse cabeçalho contém declarações de funções, macros e tipos que são usados para realizar operações básicas de entrada e saída, como leitura e escrita. O sufixo `.h` indica que é um **arquivo de cabeçalho**, contendo declarações de funções e macros.
