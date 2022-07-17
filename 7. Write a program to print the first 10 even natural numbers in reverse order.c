// 7. Write a program to print the first 10 even natural numbers in reverse order
#include <stdio.h>
int main()
{
    int x = 20;
    do
    {
        if (x % 2 == 0)
            printf("%d ", x);
        x-=2;
    } while (x >= 1);
    return 0;
}
