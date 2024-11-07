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

7. **Exercício**: Cálculo de Percentual de Votos em uma Eleição Municipal
   
   **Objetivo:** Neste exercício, você desenvolverá um programa que calcula o percentual de votos brancos, nulos e válidos em relação ao total de eleitores de um município. Este programa ajudará a entender conceitos básicos de porcentagem e manipulação de variáveis em um algoritmo.
   
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

8. **Exercício**: Cálculo de Reajuste Salarial
   
   **Objectivos:** Neste exercício, você desenvolverá um programa para calcular o novo salário de um funcionário após um reajuste. O programa irá ler o salário actual e o percentual de reajuste, calcular o aumento e exibir o valor do novo salário. Este exercício ajuda a entender operações básicas de entrada e saída de dados, além de cálculos percentuais.
   
   **Instruções:**
   
   1. **Requisitos do Programa:**
      
      - O programa deve solicitar ao usuário:
        1. O salário mensal actual do funcionário.
        2. O percentual de reajuste.
      - O programa deve calcular o valor do novo salário considerando o reajuste.
   
   2. **Fórmula sugerida:**
      
      - Novo salário = salário actual + (salário actual * percentual de reajuste / 100).
   
   3. - **Tarefa:**
        
        - Implemente o código no seu ambiente de desenvolvimento.
        - Solicite ao usuário que insira o salário actual e o percentual de reajuste.
        - Calcule o valor do novo salário e exiba o resultado.
      
      - **Exemplo de Saída Esperada:**
        
        ```textile
        Digite o salário atual do funcionário: 2000.00
        Digite o percentual de reajuste: 10
        O novo salário é: 2200.00
        
        ```
- **Perguntas para reflexão:**
  
  - Como o cálculo seria diferente se o percentual de reajuste fosse negativo? O programa deveria permitir essa possibilidade?
  - Como o programa se comporta se o percentual de reajuste for 0?
  - O programa deve validar se o valor do salário actual e do percentual de reajuste são positivos?

- **Desafio extra:**
  
  - Modifique o programa para que ele também exiba o valor do aumento, separadamente do novo salário.
  - Adicione descontos de imposto (IRT, INSS) 
  - Adicione uma funcionalidade para calcular o salário anual do funcionário após o reajuste.
