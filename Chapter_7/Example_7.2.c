//cypher1.c--更改输入空格不变

#include <stdio.h>
#include <stdlib.h>

#define SPACE ' '

int main(void)
{
    char ch;

    ch = getchar();
    while (ch != '\n')
    {
        if (ch == SPACE)
        {
            putchar(ch);
        }
        else
        {
            putchar(ch + 1);
        }
        ch = getchar();
    }
    putchar(ch); //打印换行符

    system("pause");
    return 0;
}