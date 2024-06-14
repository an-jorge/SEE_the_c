/*
Exercício: Entrada de Dados e Formatação de Saída
Este exercício tem como objetivo praticar a entrada de dados pelo usuário e a formatação de saída em C.
Utilizando as funções scanf_s e printf, você irá criar um programa simples que solicita ao usuário 
sua idade e peso, e em seguida exibe essas informações formatadas.

Instruções:
Declare duas variáveis: uma para armazenar a idade (inteiro) e outra para o peso (ponto flutuante).
Solicite ao usuário que insira sua idade utilizando a função printf.
Utilize a função scanf_s para capturar e armazenar a idade inserida pelo usuário na variável correspondente.
Solicite ao usuário que insira seu peso utilizando a função printf.
Utilize a função scanf_s para capturar e armazenar o peso inserido pelo usuário na variável correspondente.
Utilize a função printf para exibir a idade e o peso fornecidos pelo usuário, formatados adequadamente.
*/

#include <stdio.h>

int main()
{
    int age = 0;
    float weight = 0.0;
    printf("Informe a usa idade \n");
    scanf_s("%d", &age);
    printf("Informe o seu peso \n");
    scanf_s("%f", &weight);
    printf("Voce informou %d anos e %.2f kg \n", age, weight);
}