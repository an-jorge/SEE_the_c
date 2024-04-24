#include <stdio.h>

int main()
{
    int iter = 1;
    char hey[15] = "Hello world";

    do
    {
        printf("%s %d \n", hey, iter);
        iter ++;
    } while (iter <= 10);
    
}