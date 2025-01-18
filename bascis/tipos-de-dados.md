# Tipos de dados

## Compreendendo tipos de dados <a href="#variaveis" id="variaveis"></a>

Em C, os tipos de dados são categorias que definem o tipo e o tamanho da informação que pode ser armazenada em uma variável. Eles podem ser classificados em **tipos primitivos**, **modificadores de tipo** e **tipos derivados**. Aqui está uma visão geral:

#### **1. Tipos primitivos (ou básicos):** <a href="#id-1-tipos-primitivos-ou-basicos" id="id-1-tipos-primitivos-ou-basicos"></a>

Estes são os tipos de dados fundamentais que vêm com a linguagem:

<table data-full-width="true"><thead><tr><th>Tipo</th><th>Tamanho aproximado¹</th><th>Intervalo aproximado¹</th><th>Uso</th></tr></thead><tbody><tr><td><code>char</code></td><td>1 byte</td><td>-128 a 127 (ou 0 a 255)</td><td>Armazena caracteres ou inteiros pequenos.</td></tr><tr><td><code>int</code></td><td>2 ou 4 bytes</td><td>-32.768 a 32.767 (2 bytes) ou ±2 bilhões (4 bytes)</td><td>Armazena inteiros.</td></tr><tr><td><code>float</code></td><td>4 bytes</td><td>~ ±3.4E-38 a ±3.4E+38</td><td>Armazena números de ponto flutuante (decimais).</td></tr><tr><td><code>double</code></td><td>8 bytes</td><td>~ ±1.7E-308 a ±1.7E+308</td><td>Armazena números decimais maiores e mais precisos.</td></tr><tr><td><code>void</code></td><td>Sem tamanho</td><td>Não aplicável</td><td>Usado para funções que não retornam valor.</td></tr></tbody></table>

***

#### **2. Modificadores de tipo:** <a href="#id-2-modificadores-de-tipo" id="id-2-modificadores-de-tipo"></a>

Esses modificadores ajustam o tamanho ou o comportamento de tipos primitivos. Eles incluem:

<table data-full-width="true"><thead><tr><th>Modificador</th><th>Descrição</th></tr></thead><tbody><tr><td><code>signed</code></td><td>Permite valores negativos e positivos (padrão para <code>int</code>).</td></tr><tr><td><code>unsigned</code></td><td>Apenas valores positivos ou zero.</td></tr><tr><td><code>short</code></td><td>Reduz o tamanho padrão de um inteiro.</td></tr><tr><td><code>long</code></td><td>Aumenta o tamanho de um inteiro ou de um <code>double</code>.</td></tr></tbody></table>

**Exemplos:**

* `short int`: Menor intervalo de inteiros.
* `long int`: Maior intervalo de inteiros.
* `unsigned int`: Somente inteiros positivos.

***

#### **3. Tipos derivados:** <a href="#id-3-tipos-derivados" id="id-3-tipos-derivados"></a>

Esses tipos são construídos a partir dos tipos primitivos e permitem armazenar colecções de valores ou criar estruturas mais complexas.

<table data-full-width="true"><thead><tr><th>Tipo</th><th>Descrição</th></tr></thead><tbody><tr><td><strong>Array</strong></td><td>Colecção de elementos do mesmo tipo.</td></tr><tr><td><strong>Pointer</strong></td><td>Armazena o endereço de uma variável.</td></tr><tr><td><strong>Struct</strong></td><td>Agrupa diferentes tipos de dados.</td></tr><tr><td><strong>Union</strong></td><td>Semelhante à <code>struct</code>, mas compartilha o mesmo espaço de memória.</td></tr><tr><td><strong>Enum</strong></td><td>Define um conjunto de valores constantes inteiros.</td></tr></tbody></table>

***

#### **Resumo da classificação:** <a href="#resumo-da-classificacao" id="resumo-da-classificacao"></a>

<table data-header-hidden data-full-width="true"><thead><tr><th></th><th></th></tr></thead><tbody><tr><td><strong>Categoria</strong></td><td><strong>Exemplos</strong></td></tr><tr><td><strong>Primitivos</strong></td><td><code>int</code>, <code>char</code>, <code>float</code>, <code>double</code>, <code>void</code></td></tr><tr><td><strong>Modificados</strong></td><td><code>signed</code>, <code>unsigned</code>, <code>short</code>, <code>long</code></td></tr><tr><td><strong>Derivados</strong></td><td><code>array</code>, <code>pointer</code>, <code>struct</code>, <code>union</code>, <code>enum</code></td></tr><tr><td><strong>Definidos pelo usuário</strong></td><td><code>typedef</code>, <code>enum</code>, <code>struct</code></td></tr></tbody></table>

***

## &#x20;<a href="#operadores-matematicos" id="operadores-matematicos"></a>

***

## &#x20;<a href="#operadores-de-comparacao" id="operadores-de-comparacao"></a>

***

## Operadores atribuição <a href="#operadores-atribuicao" id="operadores-atribuicao"></a>

Os operadores de atribuição são usados para atribuir valores a variáveis. Aqui estão os operadores de atribuição mais comuns em C:

1. **Atribuição simples:** `=`
   * Atribui o valor à direita do operador à variável à esquerda.
2. **Atribuição com soma:** `+=`
   * Adiciona o valor à direita à variável à esquerda e atribui o resultado à variável à esquerda.
3. **Atribuição com substrução:** `-=`
   * Subtrai o valor à direita da variável à esquerda e atribui o resultado à variável à esquerda.
4. **Atribuição com multiplicação:** `*=`
   * Multiplica o valor à direita pela variável à esquerda e atribui o resultado à variável à esquerda.
5. **Atribuição com divisão:** `/=`
   * Divide o valor à esquerda pela variável à direita e atribui o resultado à variável à esquerda.
6. **Atribuição com módulo:** `%=`
   * Calcula o módulo do valor à esquerda pela variável à direita e atribui o resultado à variável à esquerda.

```c
int x = 10;
x += 5; // x agora é 15 (10 + 5)
x -= 3; // x agora é 12 (15 - 3)
x *= 2; // x agora é 24 (12 * 2)
x /= 4; // x agora é 6 (24 / 4)
x %= 2; // x agora é 0 (6 % 2)
```

É importante lembrar da precedência dos operadores, que define a ordem em que as operações são realizadas em uma expressão. A precedência dos operadores relacionais é a seguinte:

1. `!=`
2. `==`
3. `<` e `>`
4. `<=` e `>=`

***

## Ordem de precedência <a href="#ordem-de-precedencia" id="ordem-de-precedencia"></a>

Em C, assim como em muitas outras linguagens de programação, a ordem de avaliação dos operadores matemáticos segue a convenção padrão da matemática. Aqui está a ordem de precedência dos operadores matemáticos em C, da mais alta para a mais baixa:

1. **Parênteses**: Expressões dentro de parênteses são avaliadas primeiro.
2. **Multiplicação (\*) e Divisão (/)**: Multiplicação e divisão têm a mesma prioridade e são avaliadas da esquerda para a direita.
3. **Adição (+) e subtracção (-)**: Adição e subtracção têm a mesma prioridade e são avaliadas da esquerda para a direita.

Quando há operadores com a mesma precedência, a avaliação ocorre da esquerda para a direita.

**Dicas para usar operadores relacionais:**

* Utilize os operadores relacionais para comparar valores e tomar decisões em seu programa.
* Lembre-se da precedência dos operadores para evitar erros de lógica.
* Utilize parênteses para alterar a ordem de execução das operações, se necessário.

***

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

### Especificadores de formato <a href="#especificadores-de-formato" id="especificadores-de-formato"></a>

Os especificadores de formato determinam como os argumentos serão formatados e exibidos na tela, em funções como `printf()` e `scanf()`. Alguns dos mais comuns incluem:

*
  1. `%d`: Inteiro decimal
  2. `%ld`: Longo inteiro decimal
  3. `%f`: Ponto flutuante
  4. `%lf`: Duplo ponto flutuante
  5. `%c`: carácter
  6. `%s`: String
  7. `%x` ou `%X`: Inteiro hexadecimal
  8. `%o`: Inteiro octal
  9. `%u`: Inteiro sem sinal
  10. `%p`: Ponteiro
  11. `%%`: carácter de percentagem (para imprimir um símbolo de percentagem)

```c
printf("Olá, mundo!\n"); // Exibe a mensagem "Olá, mundo!"
printf("O valor de x é %d\n", 10); // Exibe "O valor de x é 10"
printf("Nome: %s, Idade: %d\n", "João", 30); // Exibe "Nome: João, Idade: 30"
```

**Formatação adicional:**

A função `printf` oferece opções avançadas para formatar a saída, como:

* Especificar a largura e justificação dos campos de texto.
* Definir a precisão de casas decimais para números de ponto flutuante.
* Usar modificadores de tipo de dados para garantir a correspondência correta entre especificadores e argumentos.

### Sequências de escape em C <a href="#sequencias-de-escape-em-c" id="sequencias-de-escape-em-c"></a>

1. : Nova linha
2. : Tabulação horizontal
3. : Retorno de carro (move o cursor para o início da linha)
4. `\\`: Barra invertida (usada para representar uma barra invertida literal)
5. `\"`: Aspas duplas (usada para representar aspas duplas literais dentro de uma string)
6. `\'`: Apóstrofo (usado para representar um apóstrofo literal dentro de uma string)
7. `\b`: Retrocesso (move o cursor uma posição para trás)
8. `\f`: Avanço de página (usado para mover o cursor para a próxima página)
9. `\v`: Tabulação vertical
10. `\a`: Alerta sonoro (produz um som de alerta)
11. `\0`: carácter nulo (termina uma string)

Estes são apenas alguns dos especificadores de formato básicos. Existem outros modificadores que podem ser usados com esses especificadores para controlar a precisão, largura do campo, preenchimento, alinhamento e muito mais.

### Função `scanf_s` <a href="#funcao-scanf_s" id="funcao-scanf_s"></a>

`scanf_s` é uma versão alternativa e mais segura da função `scanf` introduzida no padrão C11 (2011) e em bibliotecas C seguras como Microsoft Secure CRT. Ela oferece recursos para mitigar os problemas de segurança associados ao `scanf` tradicional, mas nem sempre está disponível em todos os ambientes de desenvolvimento.

**Vantagens de segurança do scanf\_s:**

* **Verificação de tamanho:** Ao especificar o tamanho máximo do buffer de destino como argumento adicional, `scanf_s` ajuda a prevenir estouro de buffer.
* **Validação de tipo (opcional):** Dependendo da implementação, `scanf_s` pode realizar verificações de tipo opcionais para garantir que os dados lidos correspondam ao tipo de variável esperado.
* **Retorno de erro:** `scanf_s` retorna códigos de erro específicos para indicar problemas durante a leitura, auxiliando no tratamento de excepções.

```c
#include <stdio.h>

int main() 
{
  char name[50];
  int idade;

  printf("Digite seu nome: ");
  scanf_s("%s", nome, sizeof(name));
  printf("Digite sua idade: ");
  scanf_s("%d", &idade, sizeof(idade));
  printf("Nome: %s, Idade: %d\n", name, idade);

  return 0;
}
```

### Scanf\_s ambas plataformas <a href="#scanf_s-ambas-plataformas" id="scanf_s-ambas-plataformas"></a>

**`scanf_s`**, não está disponível em sistemas Linux porque faz parte de uma extensão de segurança usada no Microsoft Visual Studio, e não faz parte do padrão C.

**Observações Scanf**

* **`scanf_s`** é exclusivo do Microsoft Visual Studio e Windows, enquanto `scanf` é amplamente suportado em qualquer compilador compatível com C (incluindo Linux, GCC, Clang, etc.).
* Usar diretivas de pré-processador permite que o código se adapte automaticamente ao sistema onde está sendo compilado, tornando-o portável entre Windows e Linux.

```c
#include <stdio.h>

int main()
{
    float height = 0.0;

#ifdef _WIN32
    // Se estiver no Windows, usa scanf_s
    printf("Enter your height: ");
    scanf_s("%f", &height);
#else
    // Para Linux e outros sistemas, usa scanf
    printf("Enter your height: ");
    scanf("%f", &height);
#endif

    printf("The height: %.2f\n", height);
    return 0;
}
```

**Por que `_WIN32` funciona no Windows de 64 bits?**

O nome **`_WIN32`** é um resquício histórico da época em que o Windows 32 bits era introduzido, mas foi mantido por razões de compatibilidade. Mesmo em ambientes de 64 bits, essa macro é definida para indicar que o sistema operacional é Windows, independentemente da arquitectura.

Se você quiser especificamente verificar se está em um sistema **Windows de 64 bits**, pode usar a macro **`_WIN64`**, que **apenas** é definida em sistemas Windows de 64 bits. Assim, se você precisa distinguir entre sistemas de 32 bits e 64 bits no Windows, pode usar as duas macros:

```c
#include <stdio.h>

int main() {
    #ifdef _WIN64
        printf("Sistema Windows 64 bits\n");
    #elif _WIN32
        printf("Sistema Windows 32 bits\n");
    #else
        printf("Sistema não é Windows\n");
    #endif

    return 0;
}
```
