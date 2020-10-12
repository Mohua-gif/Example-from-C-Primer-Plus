//cypher2.c--替换输入的字母，非字母字符保持不变

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char ch;

    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            putchar(ch+1);
        }
        else
        {
            putchar(ch);
        }
       
    }
    putchar(ch); //打印换行符

    system("pause");
    return 0;
}