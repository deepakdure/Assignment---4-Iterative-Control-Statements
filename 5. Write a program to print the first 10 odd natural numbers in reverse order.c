// 5. Write a program to print the first 10 odd natural numbers in reverse order
#include <stdio.h>
int main()
{
    int x = 19;
    do
    {
        //if (x % 2)
            printf("%d ", x);
        x-=2;
    } while (x >= 1);
    return 0;
}
