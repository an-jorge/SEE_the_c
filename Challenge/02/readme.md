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
