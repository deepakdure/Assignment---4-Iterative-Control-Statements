// 3. Write a program to print the first 10 natural numbers in reverse order
#include <stdio.h>
int main()
{
    int x = 10;
    do
    {
        printf("%d ", x);
        x--;
    } while (x >= 1);
    return 0;
}