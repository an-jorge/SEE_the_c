---
icon: centercode
description: Seus primeiros passos na programação
---

# Bem-vindos a Jornada

***

## A introdução a Linguagem C

C é uma linguagem poderosa e flexível, ideal para desenvolvimento de baixo nível e aplicações que exigem desempenho otimizado. Embora exigente em termos de gerenciamento de memória e complexidade, seu aprendizado é fundamental para quem deseja entender profundamente como o computador e a programação funcionam.

Desenvolvida por Dennis Ritchie no início dos anos 1970 na AT\&T Bell Labs. Ela é amplamente utilizada devido à sua eficiência, flexibilidade e controle detalhado sobre o hardware, C é considerada uma linguagem de baixo nível em relação a outras linguagens modernas, o que a torna ideal para o desenvolvimento de sistemas, aplicativos e software que exigem alta performance.

Este é um guia de aprendizagem da linguagem C apresento os tópicos essenciais da linguagem, com descrições, tempo estimado de estudo e caixas de selecção para acompanhar o seu progresso. É direccionado para pessoas com pouca ou nenhuma experiência anterior em programação.

#### **Estrutura do Guia** <a href="#estrutura-do-guia" id="estrutura-do-guia"></a>

<table data-full-width="true"><thead><tr><th width="215">Tópico</th><th width="495">Descrição</th><th width="317">Estimativa</th><th>Checkbox</th></tr></thead><tbody><tr><td><strong>Noções Básicas</strong></td><td><ul><li>Compreendendo variáveis</li><li>Tipos de dados (int, float, char, etc.)</li><li>Aprender operadores (aritméticos, relacionais, lógicos etc.)</li><li>Dominar entrada/saída (printf, scanf)</li></ul></td><td>2 Semana</td><td>[ ]</td></tr><tr><td><strong>Fluxo de Controle</strong></td><td><ul><li>Aprender instruções condicionais (if-else, switch) </li><li>Entender loops (for, while, do-while)</li></ul></td><td>1 Semana</td><td>[ ]</td></tr><tr><td><strong>Funções</strong></td><td><ul><li>Definir e chamar funções</li><li>Passar argumentos e retornar valores</li></ul></td><td>1 Semana</td><td>[ ]</td></tr><tr><td><strong>Arrays</strong></td><td><ul><li>Aprender a declarar, inicializar e acessar arrays</li><li>Entender operações básicas em arrays (percorrer, pesquisar)</li></ul></td><td>1 Semana</td><td>[ ]</td></tr><tr><td><strong>Ponteiros</strong></td><td><ul><li>Compreender o conceito de endereços de memória </li><li>Aprender declaração, aritmética e manipulação de ponteiros (importante, mas pode ser desafiador)</li></ul></td><td>2 Semanas</td><td>[ ]</td></tr><tr><td><strong>Estruturas</strong></td><td><ul><li>Definir tipos de dados compostos pelo usuário que agrupam variáveis</li><li>Aprender como acessar e manipular membros da estrutura</li></ul></td><td>1 Semana</td><td>[ ]</td></tr><tr><td><strong>Cadeias de Caracteres</strong></td><td><ul><li>Compreender conceitos básicos de strings e manipulação usando funções embutidas (strlen, strcpy, etc.)</li></ul></td><td>1 Semana</td><td>[ ]</td></tr><tr><td><strong>Entrada/Saída de Arquivos</strong></td><td><ul><li>Aprender como abrir, ler, escrever e fechar arquivos</li></ul></td><td>1 Semana</td><td>[ ]</td></tr><tr><td><strong>Gerenciamento de Memória</strong></td><td><ul><li>Entender alocação de memória (malloc, calloc, free)</li><li> Aprender como evitar vazamentos de memória (conceito importante)</li></ul></td><td>1 Semana</td><td>[ ]</td></tr></tbody></table>



***



O guia é organizado em secções que cobrem os principais conceitos da linguagem C:

1. **Noções Básicas:** Apresenta as variáveis, tipos de dados, operadores, entrada e saída.
2. **Fluxo de Controle:** Aborda instruções condicionais (if-else, switch) e loops (for, while, do-while).
3. **Funções:** Explica como definir, chamar, passar argumentos e retornar valores em funções.
4. **Arrays:** Detalhes sobre como declarar, inicializar, acessar e manipular arrays.
5. **Ponteiros:** Conceito de endereços de memória, declaração, aritmética e manipulação de ponteiros (importante, mas desafiador).
6. **Estruturas:** Define tipos de dados compostos que agrupam variáveis, com acesso e manipulação de seus membros.
7. **Cadeias de Caracteres:** Apresenta as operações básicas e manipulação de strings usando funções embutidas.
8. **Entrada/Saída de Arquivos:** Ensina como abrir, ler, escrever e fechar arquivos.
9. **Gerenciamento de Memória:** Aborda a alocação de memória (malloc, calloc, free) e como evitar vazamentos de memória (conceito importante).

#### 1. Declaração de variáveis <a href="#id-1-declaracao-de-variaveis" id="id-1-declaracao-de-variaveis"></a>

Na prática, as variáveis em C são geralmente nomeadas de acordo com a **convenção de nomenclatura camelCase** ou **snake\_case**, dependendo do estilo adoptado pelo projecto ou programador.

* `ratePerDay` (camelCase)
* `rate_per_day` (snake\_case)

Para neste projecto adoptei por utilizar estilo snake\_case, com **variáveis** e **funções** escritas em inglês para melhor leitura de código, com tudo outputs (saída para usuário) será em Português.

```c
int total_fruit;
void game_over();
```

#### 2. **ALL\_CAPS** para macros e constantes <a href="#id-2-all_caps-para-macros-e-constantes" id="id-2-all_caps-para-macros-e-constantes"></a>

Para macros e constantes definidas com `#define`, o estilo `ALL_CAPS` (todas as letras em maiúsculas) é padrão.

```c
#define ENEMIES 100
const int MAX_LIFE = 5;
```

**1 - Motivo**: O uso de maiúsculas ajuda a distinguir macros e constantes de variáveis regulares, tornando o código mais legível e ajudando a evitar confusões.

**2 - Motivo**: Este estilo é fácil de ler, consistente e segue uma convenção de nomeação que é usada amplamente em sistemas baseados em C, como o kernel do Linux e projectos GNU.

**Observações Importantes**

* O tempo estimado de estudo é aproximado e depende do seu ritmo de aprendizado e experiência anterior.
* Este guia cobre os conceitos essenciais de C. À medida que você avança, pode explorar tópicos mais avançados como listas encadeadas, árvores e algoritmos.
* A prática consistente é crucial! Existem muitos exercícios e projectos online disponíveis para solidificar seu aprendizado.

**Recursos Adicionais**

* [C docs - get started, tutorials, reference. | Microsoft Learn](https://learn.microsoft.com/en-us/cpp/c-language/?view=msvc-170)
* [Especificadores de formatação em C](https://www.freecodecamp.org/portuguese/news/especificadores-de-formatacao-em-c/)

**Dicas**

* Pratique bastante usando os conceitos aprendidos em diferentes contextos.
* Experimente diferentes modificadores e conversões para obter a formatação desejada.
* Consulte a documentação oficial das funções e bibliotecas para obter informações mais detalhadas.

#### [Contribuições](https://uuntu.gitbook.io/see-the-c/intro/guia-de-contribuicoes) <a href="#contribuicoes" id="contribuicoes"></a>
