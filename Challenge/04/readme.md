# **04 -Exercício: Criando uma Interface de Linha de Comando (CLI)**

**Objectivo:** Neste exercício, você irá explorar o funcionamento de uma Interface de Linha de Comando (CLI). O objectivo é criar um programa que interpreta e responde a comandos inseridos pelo usuário. Essa actividade ajuda a consolidar o uso de strings, funções e controle de fluxo em C.

---

**Descrição do Programa:** O programa oferece uma interface simples onde o usuário pode inserir comandos. Ele reconhece três comandos principais:

- `help`: Exibe uma lista de comandos disponíveis e suas descrições.
- `hello`: Exibe uma mensagem de saudação.
- `exit`: Encerra o programa.

Se um comando não for reconhecido, o programa informa o erro e sugere usar `help` para mais informações.

**Instruções:**

1. **Passo a Passo:**
   
   - Compile e execute o programa.
   - Teste os comandos disponíveis: `help`, `hello` e `exit`.
   - Experimente inserir comandos inválidos e observe a resposta do programa.

2. **Exemplo de Execução:**
   
   ```textile
   Bem-vindo à interface de linha de comando (CLI).
   
   Digite 'help' para ver os comandos disponíveis.
   > hello
   
   Olá! Bem-vindo à interface de linha de comando.
   > help
   
   Comandos disponíveis:
    - help: Mostra esta mensagem de ajuda.
    - exit: Sai do programa.
    - hello: Mostra uma mensagem de saudação.
   
   > unknown
   Comando não reconhecido: 'unknown'. Tente 'help'.
   > exit
   
   Saindo do programa...
   ```

**Perguntas para Reflexão:**

- Como o programa pode ser modificado para ignorar diferenças entre maiúsculas e minúsculas nos comandos (por exemplo, aceitar `HELP` ou `Hello`)?

- O que acontece se o usuário inserir um comando muito longo? Como você poderia evitar problemas relacionados a isso?
  
  

**Desafios Extras:**

- - Adicione novos comandos ao programa. Por exemplo:
    - `time`: Mostra a hora actual.
    - `clear`: Limpa a tela do terminal.
  - Modifique o programa para permitir que o usuário insira comandos com argumentos, como `add 10 20` para somar dois números.
  - Implemente um contador de comandos válidos executados e mostre o total ao sair do programa.

- **Dica:** Para adicionar novos comandos, basta incluir mais `else if` no corpo da função `processCommand` e implementar a lógica correspondente ao comando. Use a função `strcmp` para comparar strings.


