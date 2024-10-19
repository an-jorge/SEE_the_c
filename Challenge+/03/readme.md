# Sistema de Gerenciamento de Biblioteca em C

**Objetivo:** Neste exercício, você desenvolverá um sistema de gerenciamento de biblioteca, que permitirá o cadastro de livros, autores, registros de empréstimos e a realização de buscas por livros. Este sistema simula uma biblioteca básica, onde os usuários podem consultar informações sobre livros e gerenciar empréstimos.

**Instruções:**

1. **Requisitos do Sistema:**
   
   - O sistema deve permitir:
     1. Cadastrar livros e seus respectivos autores.
     2. Registrar empréstimos de livros.
     3. Buscar livros por título ou autor.
     4. Listar todos os livros disponíveis na biblioteca.
   - O sistema deve apresentar um menu para que o usuário possa escolher entre essas funcionalidades.

2. **Estrutura sugerida:**
   
   - Utilize **estruturas** (`struct`) para organizar os dados de livros, autores e empréstimos.
   - Um livro deve ter pelo menos: título, autor e status (disponível ou emprestado).
   - Utilize arrays para armazenar os livros e empréstimos (pode limitar o número de livros, como 100).
   - Utilize funções para as operações de cadastro, busca, e empréstimo de livros.

3. **Funcionalidades que o sistema deve implementar:**
   
   - **Menu principal:** O programa deve apresentar um menu com as opções:
     
     1. Cadastrar livro
     2. Registrar empréstimo
     3. Buscar livro
     4. Listar livros
     5. Sair
   
   - **Cadastrar Livro:** O sistema solicita ao usuário o título e o autor do livro e adiciona-o ao sistema.
   
   - **Registrar Empréstimo:** O sistema deve permitir registrar o empréstimo de um livro, verificando se o livro está disponível. Se estiver, o status do livro muda para "emprestado".
   
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

```
5. **Perguntas para reflexão:**

- Como você controlaria o número máximo de livros que podem ser cadastrados? O que acontece se esse limite for atingido?
- Como o sistema deve lidar com a tentativa de empréstimo de um livro que já está emprestado?
- Como a busca de livros pode ser otimizada? Você pode implementar buscas por palavras parciais no título ou no nome do autor?

6. **Desafio extra:**

- Modifique o sistema para permitir a devolução de livros, alterando o status de "emprestado" para "disponível".
- Adicione uma funcionalidade para salvar os registros de livros e empréstimos em um arquivo, e carregar esses dados ao iniciar o programa, permitindo que o sistema seja persistente (ou seja, que os dados não sejam perdidos após o fechamento).
- Implemente uma funcionalidade para categorizar livros por gênero e permitir buscas por categoria.
```
