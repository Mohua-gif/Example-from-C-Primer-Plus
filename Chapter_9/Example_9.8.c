//binary.c--以二进制形式打印制整数

#include <stdio.h>
#include <stdlib.h>

void to_binary(unsigned long int);

int main(void)
{
    unsigned long int number;
    while (scanf("%lu",&number)==1)
    {
        to_binary(number);
        putchar('\n');
    }
    
    system("pause");
    return 0;
}

void to_binary(unsigned long int n) //递归函数
{
    int r;

    r = n % 2;
    if (n >= 2)
        to_binary(n / 2);
    putchar(r == 0 ? '0' : '1');

    return ;
}