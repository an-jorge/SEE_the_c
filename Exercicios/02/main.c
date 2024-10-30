#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese \n");
    printf("||||||||||||||||||||||||||||||||||\n");
    printf(" | CALCULO DE MÉDIA DO ALUNO | \n");
    printf("|||||||||||||||||||||||||||||||||| \n");

    int first_exam = 10;
    int second_exam = 5;
    int third_exam = 8;
    int sum_exams;
    printf("NOTAS DO ALUNO \n");
    printf("(1) %d \n", first_exam);
    printf("(2) %d \n", second_exam);
    printf("(3) %d \n", third_exam);
    sum_exams = first_exam + second_exam + third_exam / 3;
    printf("A nota média do aluno é de %d valores \n",sum_exams);
    return 0;
}