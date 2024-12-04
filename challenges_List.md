# 01 - Projectos Prático: Calculadora Simples

Descrição:

Neste projecto prático, você irá criar uma calculadora simples em C que permitirá ao usuário realizar operações básicas de adição, subtracção, multiplicação e divisão. O objectivo é aplicar os fundamentos aprendidos, como variáveis, operadores, condicionais e funções, para criar uma aplicação funcional.

Passos do Projectos:

1. Interface do Usuário: Crie uma interface amigável para o usuário, onde ele poderá escolher a operação desejada e fornecer os números para cálculo.

2. Operações Básicas: Implemente funções para realizar as operações de adição, subtracção, multiplicação e divisão. Cada função deve receber dois números como argumentos e retornar o resultado.

3. Validação de Entrada: Garanta que o programa trate erros de entrada do usuário, como digitar caracteres inválidos ou divisão por zero.

4. Loop de Execução: Crie um loop que permita ao usuário realizar várias operações consecutivas até decidir sair da calculadora.

5. Encerramento da Calculadora: Implemente uma opção para que o usuário possa sair da calculadora, encerrando o loop de execução.

Exemplo de Execução:

```textile
Escolha uma operação:

1 - Adição

2 - Subtração

3 - Multiplicação

4 - Divisão

0 - Sair



Opção: 1



Digite o primeiro número: 10

Digite o segundo número: 5



Resultado: 10 + 5 = 15



Deseja realizar outra operação? (s/n) s



Escolha uma operação:

1 - Adição

2 - Subtração

3 - Multiplicação

4 - Divisão

0 - Sair



Opção: 4



Digite o primeiro número: 20

Digite o segundo número: 0



Erro: Divisão por zero!



Deseja realizar outra operação? (s/n) s



Escolha uma operação:

1 - Adição

2 - Subtração

3 - Multiplicação

4 - Divisão

0 - Sair



Opção: 0



Calculadora encerrada. Obrigado!
```

Este projecto prático da calculadora simples irá ajudá-lo a aplicar os fundamentos aprendidos em C, criar funções reutilizáveis e trabalhar com condicionais e loops. Além disso, você terá a oportunidade de praticar a entrada e saída de dados com o usuário. Divirta-se criando sua própria calculadora funcional

---

# 02 - Sistema de Gerenciamento de Tarefas em C

**Objectivos:** Neste exercício, você desenvolverá um sistema simples de gerenciamento de tarefas. O sistema permitirá adicionar, remover e listar tarefas, utilizando estruturas básicas em C, como arrays e loops. A ideia é simular um gerenciador de tarefas para organizar actividades.

**Instruções:**

1. **Requisitos do Sistema:**
- O sistema deve permitir ao usuário adicionar uma nova tarefa.

- O sistema deve permitir remover uma tarefa existente.

- O sistema deve exibir a lista de todas as tarefas.

- O usuário deve poder escolher entre as opções disponíveis através de um menu iterativo.
2. **Estrutura sugerida:**
- Utilize um array de strings para armazenar as tarefas.

- Use loops `while` ou `for` para navegar pelas opções do menu.

- Cada tarefa pode ser uma string de até 100 caracteres.

- Limite o número de tarefas para, por exemplo, 10.
3. **Tarefa:** Desenvolva um programa com as seguintes funcionalidades:
- **Menu principal:** O programa deve apresentar um menu com as opções:
1. Adicionar tarefa

2. Remover tarefa

3. Listar tarefas

4. Sair
- **Adicionar Tarefa:** O sistema solicita ao usuário que insira uma nova tarefa, que será armazenada no array de tarefas.

- **Remover Tarefa:** O sistema exibe a lista de tarefas e permite ao usuário remover uma tarefa específica, escolhendo seu número de identificação (índice).

- **Listar Tarefas:** Exibe todas as tarefas que foram adicionadas.
4. **Exemplo de Saída Esperada:**

```textile
--- Gerenciador de Tarefas ---

1. Adicionar tarefa

2. Remover tarefa

3. Listar tarefas

4. Sair

Escolha uma opção: 1

Digite a nova tarefa: Estudar para a prova.

Tarefa adicionada com sucesso!



--- Gerenciador de Tarefas ---

1. Adicionar tarefa

2. Remover tarefa

3. Listar tarefas

4. Sair

Escolha uma opção: 3

Tarefas:

1. Estudar para a prova
```

5. **Perguntas para reflexão:**
- Como você gerenciaria o número máximo de tarefas que podem ser adicionadas? Como o programa deve se comportar quando atinge esse limite?

- Como garantir que as operações de remoção de tarefas sejam feitas correctamente, sem deixar "buracos" no array?

- Como você poderia implementar a funcionalidade de editar uma tarefa existente?
6. **Desafio extra:**
- Permita que o sistema salve as tarefas em um arquivo de texto e as carregue ao iniciar o programa, de forma que as tarefas não sejam perdidas após o fechamento do programa.

- Adicione uma funcionalidade para marcar uma tarefa como "concluída".

---

# 03 - Sistema de Gerenciamento de Biblioteca em C

**Objectivos:** Neste exercício, você desenvolverá um sistema de gerenciamento de biblioteca, que permitirá o cadastro de livros, autores, registos de empréstimos e a realização de buscas por livros. Este sistema simula uma biblioteca básica, onde os usuários podem consultar informações sobre livros e gerenciar empréstimos.



1. O sistema deve apresentar um menu para que o usuário possa escolher entre essas funcionalidades.

**Instruções:**

**Requisitos do Sistema:**

O sistema deve permitir:

1. Cadastrar livros e seus respectivos autores.

2. registar empréstimos de livros.

3. Buscar livros por título ou autor.

4. Listar todos os livros disponíveis na biblioteca.
   
   

2. **Estrutura sugerida:**
- Utilize **estruturas** (`struct`) para organizar os dados de livros, autores e empréstimos.

- Um livro deve ter pelo menos: título, autor e status (disponível ou emprestado).

- Utilize arrays para armazenar os livros e empréstimos (pode limitar o número de livros, como 100).

- Utilize funções para as operações de cadastro, busca, e empréstimo de livros.



3. **Funcionalidades que o sistema deve implementar:**
   
   O programa deve apresentar um menu com as opções:
   
   **Menu principal**
   1. Cadastrar livros
   
   2. Registar empréstimo
   
   3. Buscar livro
   
   4. Listar livros
   
   5. Sair
- **Cadastrar Livro:** O sistema solicita ao usuário o título e o autor do livro e adiciona-o ao sistema.

- **Registar Empréstimo:** O sistema deve permitir registar o empréstimo de um livro, verificando se o livro está disponível. Se estiver, o status do livro muda para "emprestado".

- **Buscar Livro:** O sistema deve permitir buscar um livro pelo título ou pelo nome do autor. Se o livro for encontrado, suas informações (título, autor e status) serão exibidas.

- **Listar Livros:** Exibe todos os livros cadastrados no sistema, juntamente com o status (disponível ou emprestado).



4. **Exemplo de Saída Esperada:**

```textile
--- Sistema de Biblioteca ---

1. Cadastrar livro

2. Registrar empréstimo

3. Buscar livro

4. Listar livros

5. Sair

Escolha uma opção: 1

Digite o título do livro: O Alquimista

Digite o autor do livro: Paulo Coelho

Livro cadastrado com sucesso!



--- Sistema de Biblioteca ---

1. Cadastrar livro

2. Registrar empréstimo

3. Buscar livro

4. Listar livros

5. Sair

Escolha uma opção: 3

Digite o título do livro: O Alquimista

Livro encontrado: O Alquimista, Autor: Paulo Coelho,

Status: Disponível
```

**Perguntas para reflexão:**

1. Como você controlaria o número máximo de livros que podem ser 
     cadastrados? O que acontece se esse limite for atingido?

2. Como o sistema deve lidar com a tentativa de empréstimo de um 
     livro que já está emprestado?

3. Como a busca de livros pode ser optimizada? Você pode implementar
   buscas por palavras parciais no título ou no nome do autor?



**Desafio extra:**

1. Modifique o sistema para permitir a devolução de livros, alterando o
   status de "emprestado" para "disponível".

2. Adicione uma funcionalidade para salvar os registos de livros e 
   empréstimos em um arquivo, e carregar esses dados ao iniciar o programa,
   permitindo que o sistema seja persistente (ou seja, que os dados
   não sejam perdidos após o fechamento).

3. Implemente uma funcionalidade para categorizar livros por género
   e permitir buscas por categoria.

---

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




