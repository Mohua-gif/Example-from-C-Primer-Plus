//factor.c--使用循环和递归计算阶乘

#include <stdio.h>
#include <stdlib.h>

long fact(int);  //使用循环计算阶乘
long rfact(int); //使用递归计算阶乘

int main(void)
{
    int num;
    while ((scanf("%d", &num)) == 1)
    {
        if (num < 0)
            printf("Error!");
        else
        {
            printf("Loop: %d factorial=%ld\n", num, fact(num));
            printf("recursion: %d factorial=%ld\n", num, fact(num));
        }
    }

    system("pause");
    return 0;
}

long fact(int n)
{
    long ans;

    for (ans = 1; n > 1; n--)
        ans *= n;

    return ans;
}

long rfact(int n)
{
    long ans;

    if (n > 0)
    {
        ans = n * rfact(n - 1);
    }
    else
        ans = 1;

    return ans;
}