// 6. Write a program to print the first 10 even natural numbers
#include <stdio.h>
int main()
{
    int x = 2;
    do
    {
        //if (x % 2 == 0)
            printf("%d ", x);
        x+=2;
    } while (x <= 20);
    return 0;
}
