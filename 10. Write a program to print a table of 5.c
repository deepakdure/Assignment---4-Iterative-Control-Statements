// 10. Write a program to print a table of 5.
#include <stdio.h>
int main()
{
    int x = 5, i = 1;
    do
    {
        printf("%d ", x * i);
        i++;
    } while (i <= 10);
    return 0;
}
