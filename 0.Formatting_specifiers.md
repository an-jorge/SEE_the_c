# Especificadores de Formatação em C

Na linguagem C, os especificadores de formato são usados para controlar a formatação de entrada e saída de dados em funções como `printf()` e `scanf()`. Aqui estão alguns dos especificadores de formato mais comuns:

1. `%d`: Inteiro decimal
2. `%ld`: Longo inteiro decimal
3. `%f`: Ponto flutuante
4. `%lf`: Duplo ponto flutuante
5. `%c`: caracteres
6. `%s`: String
7. `%x` ou `%X`: Inteiro hexadecimal
8. `%o`: Inteiro octal
9. `%u`: Inteiro sem sinal
10. `%p`: Ponteiro
11. `%%`: caracteres de percentagem (para imprimir um símbolo de percentagem)

Estes são apenas alguns dos especificadores de formato básicos. Existem outros modificadores que podem ser usados com esses especificadores para controlar a precisão, largura do campo, preenchimento, alinhamento e muito mais.

## Sequência de escape em C

1. `\n`: Nova linha
2. `\t`: Tabulação horizontal
3. `\r`: Retorno de carro (move o cursor para o início da linha)
4. `\\`: Barra invertida (usada para representar uma barra invertida literal)
5. `\"`: Aspas duplas (usada para representar aspas duplas literais dentro de uma string)
6. `\'`: Apóstrofo (usado para representar um apóstrofo literal dentro de uma string)
7. `\b`: Retrocesso (move o cursor uma posição para trás)
8. `\f`: Avanço de página (usado para mover o cursor para a próxima página)
9. `\v`: Tabulação vertical
10. `\a`: Alerta sonoro (produz um som de alerta)
11. `\0`: caracteres nulo (termina uma string)

Essas sequências de escape são frequentemente usadas para formatar saída de texto ou para representar caracteres especiais dentro de strings em programas C.

### Especificadores de formato de scanf()

Os especificadores de formato de `scanf()` são usados para especificar o tipo de dados que será lido da entrada padrão (geralmente o teclado). Aqui estão alguns dos especificadores de formato mais comuns usados com `scanf()`:

1. `%d`: Inteiro decimal
2. `%ld`: Longo inteiro decimal
3. `%f`: Ponto flutuante
4. `%lf`: Duplo ponto flutuante
5. `%c`: caracteres
6. `%s`: String
7. `%x`: Inteiro hexadecimal
8. `%o`: Inteiro octal
9. `%u`: Inteiro sem sinal
10. `%p`: Ponteiro
11. `%[^...]`: String de caracteres excluindo os especificados entre colchetes
12. `%*d`, `%*f`, `%*s`, etc.: Ignora a entrada correspondente ao formato especificado
13. `%n`: Armazena o número de caracteres lidos até o momento na variável especificada

Estes são apenas alguns dos especificadores de formato que podem ser usados com `scanf()`. Assim como em `printf()`, existem outros modificadores que podem ser usados para controlar a precisão, largura do campo, e muito mais.
