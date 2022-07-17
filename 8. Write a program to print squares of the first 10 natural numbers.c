// 8. Write a program to print squares of the first 10 natural numbers
#include <stdio.h>
int main()
{
    int x = 1;
    do
    {
        printf("%d ", x * x);
        x++;
    } while (x <= 10);
    return 0;
}
