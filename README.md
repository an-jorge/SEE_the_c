# Iniciando na linguagem C

---

## **Introdução**

Este guia de aprendizagem em C apresenta os tópicos essenciais da linguagem, com descrições, tempo estimado de estudo e caixas de selecção para acompanhar seu progresso. É direccionado para pessoas como eu com pouca ou nenhuma experiência anterior em programação.

### **Estrutura do Guia**

| Tópico                        | Descrição                                                                                                                                                            | Tempo de Estudo (Aproximadamente) | Checkbox |
| ----------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------- | --------------------------------- | -------- |
| **Noções Básicas**            | - Compreendendo variáveis, tipos de dados (int, float, char, etc.) - Aprender operadores (aritméticos, relacionais, lógicos) - Dominar entrada/saída (printf, scanf) | 2 Semana                          | [ ]      |
| **Fluxo de Controle**         | - Aprender instruções condicionais (if-else, switch) - Entender loops (for, while, do-while)                                                                         | 1 Semana                          | [ ]      |
| **Funções**                   | - Definir e chamar funções - Passar argumentos e retornar valores                                                                                                    | 1 Semana                          | [ ]      |
| **Arrays**                    | - Aprender a declarar, inicializar e acessar arrays - Entender operações básicas em arrays (percorrer, pesquisar)                                                    | 1 Semana                          | [ ]      |
| **Ponteiros**                 | - Compreender o conceito de endereços de memória - Aprender declaração, aritmética e manipulação de ponteiros (importante, mas pode ser desafiador)                  | 2 Semanas                         | [ ]      |
| **Estruturas**                | - Definir tipos de dados compostos pelo usuário que agrupam variáveis - Aprender como acessar e manipular membros da estrutura                                       | 1 Semana                          | [ ]      |
| **Cadeias de Caracteres**     | - Compreender conceitos básicos de strings e manipulação usando funções embutidas (strlen, strcpy, etc.)                                                             | 1 Semana                          | [ ]      |
| **Entrada/Saída de Arquivos** | - Aprender como abrir, ler, escrever e fechar arquivos                                                                                                               | 1 Semana                          | [ ]      |
| **Gerenciamento de Memória**  | - Entender alocação de memória (malloc, calloc, free) - Aprender como evitar vazamentos de memória (conceito importante)                                             | 1 Semana                          | [ ]      |

O guia é organizado em secções que cobrem os principais conceitos da linguagem C:

1. **Noções Básicas:** Apresenta as variáveis, tipos de dados, operadores, entrada e saída.
2. **Fluxo de Controle:** Aborda instruções condicionais (if-else, switch) e loops (for, while, do-while).
3. **Funções:** Explica como definir, chamar, passar argumentos e retornar valores em funções.
4. **Arrays:** Detalhes sobre como declarar, inicializar, acessar e manipular arrays.
5. **Ponteiros:** Conceito de endereços de memória, declaração, aritmética e manipulação de ponteiros (importante, mas desafiador).
6. **Estruturas:** Define tipos de dados compostos que agrupam variáveis, com acesso e manipulação de seus membros.
7. **Cadeias de Caracteres:** Apresenta as operações básicas e manipulação de strings usando funções embutidas.
8. **Entrada/Saída de Arquivos:** Ensina como abrir, ler, escrever e fechar arquivos.
9. **Gerenciamento de Memória:** Aborda a alocação de memória (malloc, calloc, free) e como evitar vazamentos de memória (conceito importante).

### 1. Declaração de variáveis

Na prática, as variáveis em C são geralmente nomeadas de acordo com a **convenção de nomenclatura camelCase** ou **snake_case**, dependendo do estilo adoptado pelo projecto ou programador.

- `ratePerDay` (camelCase)
- `rate_per_day` (snake_case)

Para neste projecto adoptei por utilizar estilo snake_case, com **variáveis** e **funções** escritas em inglês para melhor leitura de código, tudo output será em Português.

```c
int total_fruit;
void game_over();
```

### 2. **ALL_CAPS** para macros e constantes

Para macros e constantes definidas com `#define`, o estilo `ALL_CAPS` (todas as letras em maiúsculas) é padrão.

```c
#define ENEMIES 100
const int MAX_LIFE = 5;
```

**1 - Motivo**: O uso de maiúsculas ajuda a distinguir macros e constantes de variáveis regulares, tornando o código mais legível e ajudando a evitar confusões.

**2 - Motivo**: Este estilo é fácil de ler, consistente e segue uma convenção de nomeação que é usada amplamente em sistemas baseados em C, como o kernel do Linux e projectos GNU.

**Observações Importantes**

- O tempo estimado de estudo é aproximado e depende do seu ritmo de aprendizado e experiência anterior.
- Este guia cobre os conceitos essenciais de C. À medida que você avança, pode explorar tópicos mais avançados como listas encadeadas, árvores e algoritmos.
- A prática consistente é crucial! Existem muitos exercícios e projectos online disponíveis para solidificar seu aprendizado.

**Recursos Adicionais**

- <https://www.freecodecamp.org/espanol/>
- [C docs - get started, tutorials, reference. | Microsoft Learn](https://learn.microsoft.com/en-us/cpp/c-language/?view=msvc-170)
- [Especificadores de formatação em C](https://www.freecodecamp.org/portuguese/news/especificadores-de-formatacao-em-c/)

**Dicas**

- Pratique bastante usando os conceitos aprendidos em diferentes contextos.
- Experimente diferentes modificadores e conversões para obter a formatação desejada.
- Consulte a documentação oficial das funções e bibliotecas para obter informações mais detalhadas.

**Contribuições**

Este é um guia em constante desenvolvimento. Se você tiver sugestões, correcções ou traduções de outros materiais relevantes para o aprendizado de C, por favor, compartilhe-as para que o guia possa ser aprimorado e beneficiar mais pessoas.
