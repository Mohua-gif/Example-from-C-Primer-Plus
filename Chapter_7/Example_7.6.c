//chcount.c--使用逻辑与运算符

#include<stdio.h>
#include<stdlib.h>
#define PERIOD '.'

int main(void)
{
    char ch;
    int charcount=0;

    while ((ch=getchar())!=PERIOD)
    {
        if (ch!='"' && ch!='\'')
        {
            charcount++;
        }
        
    }
    printf("%d\n",charcount);

    system("pause");
    return 0;
}