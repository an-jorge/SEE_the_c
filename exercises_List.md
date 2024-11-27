# Exercícios

1. Exercício: **Operações Matemáticas Simples em C**
   
   **Objectivos:** Neste exercício, você aprenderá como realizar operações matemáticas básicas em C, utilizando variáveis inteiras e a função `printf` para exibir o resultado da soma de dois números inteiros.
   
   **Instruções:**
   
   1. **Entendimento do código:**
      
      - O código define três variáveis inteiras: `first_number`, `second_number` e `sum_numbers`.
      - `first_number` é inicializada com o valor 10 e `second_number` com o valor 5.
      - A variável `sum_number` armazena o resultado da soma de `first_number` e `second_number`.
      - O programa, então, exibe o resultado da soma usando `printf`.
   
   2. **Tarefa:**
      
      - Copie e cole o código no seu ambiente de desenvolvimento C.
      - Compile e execute o programa.
      - Observe a saída, que exibe o resultado da soma de 10 e 5.
   
   3. **Perguntas para reflexão:**
      
      - Como o valor da soma é calculado e armazenado na variável `sum_numbers`?
      - O que acontece se você alterar os valores de `first_number` e `second_number`?
      - Como você poderia modificar o código para realizar outras operações, como subtracção, multiplicação ou divisão?
   
   4. **Desafio extra:**
      
      - Modifique o código para permitir que o usuário insira os valores de `first_number` e `second_number` usando `scanf`, em vez de usar valores fixos.
      - Adicione outras operações matemáticas (subtracção, multiplicação e divisão) e exiba os resultados de cada uma delas na saída do programa.
        
        

2. Exercício: **Cálculo de Média Aritmética em C**
   
   **Objectivo:** Neste exercício, você praticará como calcular e exibir uma média aritmética simples em C, além de identificar possíveis erros no cálculo de expressões matemáticas envolvendo variáveis inteiras.
   
   **Instruções:**
   
   1. **Entendimento do código:**
      
      - O código define três variáveis inteiras: `first_value`, `second_value` e `third_value`, que representam três notas de um aluno.
      - O valor da variável `sum_of_values` armazena a soma das três notas, e o programa exibe essas notas em sequência.
      - O código tenta calcular a média das notas e exibe o resultado.
   
   2. **Tarefa:**
      
      - Execute o código em seu compilador C.
      - Observe o valor da média exibida. O cálculo parece correto?
   
   3. **Perguntas para reflexão:**
      
      - O cálculo da média está correto? Se não, por que o resultado da média não é o esperado?
      - Como o operador de divisão (`/`) está sendo aplicado no código e o que deveria ser corrigido?
      - Como você pode garantir que a divisão é realizada de forma adequada para calcular a média correta?
   
   4. **Correcção do código:**
      
      - A expressão para o cálculo da média está incorrecta. A divisão de `third_value` por 3 ocorre antes da soma dos valores, devido à ordem de precedência dos operadores em C.
   
   5. **Desafio extra:**
      
      - Modifique o programa para que o usuário possa inserir as três notas em tempo de execução, usando a função `scanf`.
      - Modifique o código para exibir a média com uma casa decimal, utilizando variáveis do tipo `float` para melhorar a precisão do cálculo da média.
        
        

3. Exercício: **Conversão de Temperatura de Celsius para Fahrenheit em C**
   
   **Objectivo:** Neste exercício, você praticará a conversão de temperaturas de Celsius para Fahrenheit, além de trabalhar com o conceito de internacionalização de programas usando a função `setlocale` para configurar a localidade em Português.
   
   **Instruções:**
   
   1. **Entendimento do código:**
      
      - O programa define uma variável `celsius` com o valor 20.
      - A conversão para Fahrenheit é feita usando a fórmula: Fahrenheit=(Celsius×59​)+32
      - NOTA: (20**°C** × 9/5) + 32 = 68**°F**
      - O valor da temperatura em Celsius e o resultado da conversão em Fahrenheit são exibidos.
      - O código também tenta configurar a localidade para o português utilizando `setlocale(LC_ALL, "Portuguese")` para suportar caracteres específicos e formatação de acordo com o idioma.
   
   2. **Tarefa:**
      
      - Copie o código e execute-o no seu compilador C.
      - Observe a saída com as temperaturas exibidas tanto em Celsius quanto em Fahrenheit.
      - Certifique-se de que a configuração da localidade funcione correctamente. Se a localidade `portuguese` não estiver disponível no sistema, o código exibe uma mensagem de erro.
   
   3. **Perguntas para reflexão:**
      
      - A fórmula de conversão para Fahrenheit está correta? Se sim, por que a multiplicação por 9/5 é necessária?
      - O que acontece se você alterar o valor da variável `celsius` para outro número? O cálculo se ajusta correctamente?
      - A função `setlocale` funcionou como esperado no seu ambiente de desenvolvimento? Se não, que passos adicionais podem ser necessários para configurar a localidade no seu sistema?
   
   4. **Desafio extra:**
      
      - Modifique o programa para permitir que o usuário insira uma temperatura em Celsius através da função `scanf` e exiba a conversão correspondente para Fahrenheit.
      - Adicione uma função para converter Fahrenheit de volta para Celsius.
      - Teste o programa com diferentes valores de temperatura para garantir que as conversões estão corretas.
        
        

4. Exercício: **Verificação de Paridade de um Número em C**
   
   **Objectivos:** Neste exercício, você aprenderá a verificar se um número inteiro é par ou ímpar utilizando a estrutura condicional `if-else` em C. Você também praticará o uso do operador de módulo (`%`) para realizar essa verificação.
   
   **Instruções:**
   
   1. **Entendimento do código:**
      
      - O programa define uma variável inteira `number` com o valor 13.
      - O operador de módulo (`%`) é utilizado para verificar o resto da divisão de `number` por 2. Se o resto for 0, o número é par; caso contrário, o número é ímpar.
      - O programa exibe uma mensagem indicando se o número é "par" ou "ímpar".
   
   2. **Tarefa:**
      
      - Copie e cole o código no seu ambiente de desenvolvimento C.
      - Execute o programa e observe a saída para o número 13.
      - Altere o valor da variável `number` para outros números inteiros e verifique se o programa classifica correctamente os números como pares ou ímpares.
      - Altere do `if-else` para `while` ou `do-while`
   
   3. **Perguntas para reflexão:**
      
      - Como o operador de módulo `%` funciona para verificar se um número é par ou ímpar?
      - O que acontece se você alterar `number` para um valor negativo? O resultado permanece correto?
      - O código funcionaria correctamente para o valor 0? Teste e reflicta sobre o resultado.
   
   4. **Desafio extra:**
      
      - Modifique o programa para que o usuário possa inserir um número através da função `scanf` e, em seguida, verificar se esse número é par ou ímpar.
      - Modifique o programa para lidar com múltiplos números em sequência, permitindo que o usuário verifique a paridade de uma lista de números.
      - Exiba uma mensagem personalizada no caso de o número ser zero, indicando que "zero é um número neutro".
        
        

5. Exercício: **Entrada e Saída de Dados Simples em C**
   
   **Objectivos:** Neste exercício, você praticará como utilizar as funções `printf` e `scanf` em C para capturar e exibir dados fornecidos pelo usuário. O programa solicitará ao usuário que informe a sua idade e o seu peso, e em seguida exibirá essas informações de forma formatada.
   
   **Instruções:**
   
   1. Analise o código fornecido que contém um programa básico em C:
      
      - O programa solicita que o usuário insira dois valores: a idade (um número inteiro) e o peso (um número decimal do tipo `float`).
      - Esses valores são então exibidos de volta ao usuário, com o peso formatado para mostrar duas casas decimais.
   
   2. **Tarefa**:
      
      - Execute o código no seu compilador C (por exemplo, usando `clang` ou `gcc` no Ubuntu).
      - Insira diferentes valores para a idade e o peso durante a execução do programa e observe a saída.
   
   3. **Perguntas para reflexão:**
      
      - Como as funções `scanf` e `printf` estão funcionando nesse código?
      - O que acontece se você inserir um valor não numérico ao ser solicitado um número?
      - Como você poderia modificar o código para lidar com erros de entrada (por exemplo, se o usuário digitar algo inválido)?
   
   4. **Desafio extra:** Modifique o código para também pedir o nome do usuário (um `char[]`) e exibir uma saudação personalizada juntamente com a idade e o peso.
      
      

6. Exercício: **Leitura e Impressão de Elementos de um Array em C**
   
   **Objectivos:** Neste exercício, você praticará como utilizar loops (laços de repetição) em C para capturar e exibir múltiplos valores utilizando um array . O programa solicita que o usuário insira cinco números inteiros, armazena-os em um array, e depois exibe os números inseridos.
   
   **Instruções:**
   
   1. **Entendimento do código:**
      
      - O código define um Array`arr` com 5 posições.
      - Em seguida, um loop `for` é usado para solicitar ao usuário que insira 5 números, que serão armazenados no array .
      - Outro loop `for` exibe esses números de volta ao usuário.
   
   2. **Tarefa:**
      
      - Copie o código e execute-o no seu compilador C.
      - Insira cinco números inteiros quando solicitado.
      - Verifique se os números inseridos são exibidos correctamente na tela.
   
   3. **Perguntas para reflexão:**
      
      - O que acontece se você tentar inserir menos de cinco números? Ou mais de cinco números?
      - O que aconteceria se você removesse o espaço extra após o formato `"%d "` no `scanf_s`?
      - Qual a diferença entre `scanf_s` e `scanf` no contexto da segurança de entrada de dados?
   
   4. **Desafio extra:**
      
      - Modifique o programa para que ele possa armazenar e exibir um número maior de elementos, por exemplo, 10 números ao invés de 5.
      - Adicione uma verificação para garantir que o usuário está inserindo apenas números inteiros. Caso contrário, peça que insira o valor novamente.
        
        

7. Exercício: **Cálculo de Percentual de Votos em uma Eleição Municipal**
   
   **Objectivo:** Neste exercício, você desenvolverá um programa que calcula o percentual de votos brancos, nulos e válidos em relação ao total de eleitores de um município. Este programa ajudará a entender conceitos básicos de percentagem e manipulação de variáveis em um algoritmo.
   
   **Instruções:**
   
   1. **Requisitos do Programa:**
      
      - O programa deve solicitar ao usuário:
        1. O número total de eleitores no município.
        2. O número de votos brancos.
        3. O número de votos nulos.
        4. O número de votos válidos.
      - O programa deve calcular o percentual que cada tipo de voto (branco, nulo e válido) representa em relação ao total de eleitores.
   
   2. **Fórmulas sugeridas:**
      
      - Percentual de votos brancos: (votos brancos/total de eleitores)×100
      - Percentual de votos nulos: (votos nulos/total de eleitores)×100
      - Percentual de votos válidos: (votos validos/total de eleitores)×100
   
   3. **Tarefa:**
      
      - Implemente o código em seu ambiente de desenvolvimento.
      - Solicite ao usuário que insira os dados necessários.
      - Calcule os percentuais para cada tipo de voto e exiba o resultado.
   
   4. **Exemplo de Saída Esperada:**
      
      ```textile
      Digite o número total de eleitores: 1000
      Digite o número de votos brancos: 100
      Digite o número de votos nulos: 50
      Digite o número de votos válidos: 850
      
      Percentual de votos brancos: 10.0%
      Percentual de votos nulos: 5.0%
      Percentual de votos válidos: 85.0%
      ```
   
   5. **Perguntas para reflexão:**
      
      - O que acontece se a soma de votos brancos, nulos e válidos for diferente do total de eleitores? Como você poderia tratar essa situação?
      - Por que o cálculo de percentuais é útil em situações como essa?
      - O programa funcionaria correctamente se o número total de eleitores fosse zero? Se não, como você pode modificar o código para evitar erros?
   
   6. **Desafio extra:**
      
      - Modifique o programa para exibir uma mensagem de erro se a soma de votos brancos, nulos e válidos for maior que o total de eleitores.
      - Adicione uma funcionalidade para calcular o percentual de abstenção, considerando o total de eleitores e a soma de todos os votos.
        
        

8. Exercício: **Cálculo de Novo Salário com Reajuste**
   
   **Objectivo:** Neste exercício, você criará um programa que calcula o novo salário de um funcionário após um reajuste percentual. O programa deverá ler o salário actual e o percentual de reajuste, realizar o cálculo do novo valor e exibir o resultado. Esse exercício ajuda a praticar operações matemáticas simples e manipulação de variáveis em um algoritmo.
   
   **Instruções:**
   
   1. **Requisitos do Programa:**
      
      - O programa deve solicitar ao usuário:
        1. O salário mensal actual do funcionário.
        2. O percentual de reajuste.
      - Com essas informações, o programa calculará o novo salário considerando o reajuste.
   
   2. **Fórmula sugerida:**
      
      - Novo salário = salário actual + (salário actual * percentual de reajuste / 100)
   
   3. **Tarefa:**
      
      - Implemente o código no seu ambiente de programação.
      - Solicite ao usuário que insira o salário actual do funcionário e o percentual de reajuste.
      - Calcule o valor do novo salário e exiba o resultado.
   
   4. **Exemplo de Saída Esperada:**
      
      ```textile
      Digite o salário atual do funcionário: 3000.00
      Digite o percentual de reajuste: 5
      O novo salário é: 3150.00
      ```
      
      - **Perguntas para reflexão:**
        
        - Como você garantiria que o usuário insira um valor válido para o percentual de reajuste (por exemplo, evitando valores negativos)?
        - Como o programa deveria se comportar se o reajuste for 0%?
        - O programa deveria permitir valores decimais no percentual de reajuste?
      
      - **Desafio extra:**
        
        - Modifique o programa para exibir também o valor do aumento separadamente (a diferença entre o novo salário e o salário actual).
        - Adicione uma funcionalidade para calcular e exibir o salário anual do funcionário após o reajuste, multiplicando o novo salário mensal por 12.
        - Adicione descontos de imposto (IRT, INSS)
          
          

9. Exercício: **Jogo de Adivinhação Simples**
   
   **Objectivo:** Neste exercício, você criará um programa de adivinhação em que o usuário deve tentar adivinhar um número específico. O programa informará ao usuário se ele errou e pedirá que tente novamente até acertar o número correto. O exercício ajuda a praticar o uso de loops e a interacção com o usuário.
   
   **Instruções:**
   
   1. **Requisitos do Programa:**
      
      - O programa deve solicitar que o usuário digite um número.
      - Se o número digitado for diferente de 4, o programa exibe a mensagem "Errou novamente" e pede um novo palpite.
      - O programa continua solicitando um novo número até que o usuário digite o número 4.
      - Quando o usuário acerta, o programa exibe "Ganhou" e termina a execução.
   
   2. **Passos para Implementar:**
      
      - Compile e execute o código em um ambiente de programação.
      - Observe o comportamento do programa quando o usuário acerta e erra o número.
   
   3. **Exemplo de Saída Esperada:**
      
      ```textile
      Diga um número
      3
      Errou novamente
      Diga um número
      7
      Errou novamente
      Diga um número
      4
      Parabéns! Ganhou.
      ```
      
      **Perguntas para Reflexão:**
      
      - O que aconteceria se o número correto fosse alterado para outro valor? Como você poderia modificar o código para facilitar essa alteração?
      - Como você faria para limitar o número de tentativas que o usuário pode fazer antes de encerrar o programa?
   
   4. **Desafio Extra:**
      
      - Modifique o programa para gerar o número correto aleatoriamente, entre 1 e 10, em vez de fixar o valor como 4. Para isso, utilize a biblioteca `<stdlib.h>` e a função `rand()`.
        
        

10. Exercício: **Pesquisa de Elemento em um Array**
    
    **Objetivo:** Neste exercício, você desenvolverá um programa que preenche um array com 10 números inteiros e permite ao usuário buscar por um número específico. O programa verificará se o número informado pelo usuário está presente no array e indicará sua posição ou, se não encontrado, exibirá uma mensagem informando que o número não existe.
    
    **Instruções:**
    
    1. **Requisitos do Programa:**
       
       - Preencha um array com 10 números inteiros fornecidos pelo usuário.
       - Solicite ao usuário que digite um número para pesquisa.
       - Verifique se o número informado está presente no array:
         - Se o número existir, exiba a posição em que ele se encontra no array.
         - Se o número não existir, exiba uma mensagem informando que ele não foi encontrado.
    
    2. **Estrutura do Programa:**
       
       - Utilize um **loop** para preencher o array com os 10 números.
       - Utilize outro **loop** para verificar se o número digitado está no array.
    
    3. **Exemplo de Saída Esperada:**
       
       ```textile
       Digite o número 1 do array: 5
       Digite o número 2 do array: 10
       Digite o número 3 do array: 15
       Digite o número 4 do array: 20
       Digite o número 5 do array: 25
       Digite o número 6 do array: 30
       Digite o número 7 do array: 35
       Digite o número 8 do array: 40
       Digite o número 9 do array: 45
       Digite o número 10 do array: 50
       
       Digite um número para pesquisar no array: 25
       O número 25 está na posição 4 do array.
       ```
       
       ```textile
       Digite um número para pesquisar no array: 100
       O número 100 não foi encontrado no array.
       ```
    
    4. - **Perguntas para Reflexão:**
         
         - Como o programa deve se comportar se houver números repetidos no array?
         - O que aconteceria se o array fosse muito maior (por exemplo, 100 elementos)? Você poderia optimizar a busca de alguma forma?
       
       - **Desafio Extra:**
         
         - Modifique o programa para exibir todas as posições onde o número informado aparece (caso ele se repita no array).
         - Adicione a opção de o usuário continuar pesquisando outros números no array sem precisar reiniciar o programa.
           
           

11. Exercício: **Manipulação de Arrays - Inserindo e Exibindo Valores**
    
    **Objectivo:** Neste exercício, você irá praticar a manipulação de array em C. O objectivo é solicitar que o usuário insira valores em um array, armazenar esses valores e, em seguida, exibi-los. Essa actividade ajuda a consolidar o uso de laços de repetição e o trabalho com arrays.

**Instruções:**

1. **Descrição do Programa:**
   
   - O programa utiliza um array de 5 posições para armazenar números inteiros.
   - Solicita ao usuário que digite 5 números, que serão armazenados no array.
   - Após a entrada de todos os números, o programa exibe os valores armazenados.

2. **Tarefas:**
   
   - Compile e execute o código.
   - Insira 5 números quando solicitado.
   - Observe como os números digitados são exibidos na sequência após o processamento.

3. **Exemplo de Saída Esperada:**
   
   ```textile
   Digite Um número
   10
   Digite Um número
   20
   Digite Um número
   30
   Digite Um número
   40
   Digite Um número
   50
   
   Números inseridos
   10, 20, 30, 40, 50
   ```

4. **Perguntas para Reflexão:**
   
   - O que acontece se você tentar inserir mais do que 5 números? Como o programa poderia ser adaptado para evitar isso?
   - Como o programa se comporta se você inserir valores não numéricos? É possível melhorar a validação da entrada?

5. **Desafios Extras:**
   
   - Modifique o programa para permitir a inserção de 10 números em vez de 5.
   - Adicione um recurso para calcular e exibir a soma de todos os números armazenados no array.
   - Faça o programa exibir os números em ordem inversa à que foram inseridos.
