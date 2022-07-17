// 4. Write a program to print the first 10 odd natural numbers
#include <stdio.h>
int main()
{
    int x = 1;
    do
    {
        if (x % 2)
            printf("%d ", x);
            x+=2;
    } while (x <= 20);
    return 0;
}
