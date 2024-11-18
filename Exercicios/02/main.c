#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("|||| ||| |||||| |||||| ||||| |||||||||| \n\n");

    printf(" | CALCULO DE MÉDIA DO ALUNO | \n\n");

    printf("|||| ||| |||||| |||||| ||||| |||||||||| \n\n");

    int first_exam = 10;
    int second_exam = 5;
    int third_exam = 8;
    int sum_exams;
    printf("NOTAS DO ALUNO \n");
    printf("(1) %d \n", first_exam);
    printf("(2) %d \n", second_exam);
    printf("(3) %d \n", third_exam);
    sum_exams = first_exam + second_exam + third_exam / 3;
    printf("%dv é a nota média \n\n", sum_exams);
    return 0;
}