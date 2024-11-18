#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "UTF-8");
    printf("|||| ||| |||||| |||||| ||||| |||||||||| \n\n");

    printf(" | CALCULO DE MÉDIA DO ALUNO | \n\n");

    printf("|||| ||| |||||| |||||| ||||| |||||||||| \n\n");

    int first_exam;
    int second_exam;
    int third_exam;
    int sum_exams;

    printf("Informe a 1ª nota \n");
    scanf("%d", &first_exam);
    fflush(stdin);
    printf("Informe a 2ª nota \n");
    scanf("%d", &second_exam);
    fflush(stdin);
    printf("Informe a 3ª nota \n");
    scanf("%d", &third_exam);
    fflush(stdin);

    printf("|||| ||| |||||| |||||| ||||| |||||||||| \n");
    printf(" | NOTAS INFORMADAS DO ALUNO | \n\n");

    printf("(1) %d \n", first_exam);
    printf("(2) %d \n", second_exam);
    printf("(3) %d \n", third_exam);
    sum_exams = first_exam + second_exam + third_exam / 3;
    printf("%dv é a nota média do aluno \n\n", sum_exams);

    return 0;
}