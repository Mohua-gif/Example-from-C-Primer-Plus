//echo_eof.c--重复输入

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ch;
    FILE *fp;
    char fname[50];

    printf("Enter the name of the file: ");
    scanf("%s", fname);

    fp = fopen(fname, "r");

    if (fp == NULL)
    {
        printf("Failed to open file.bye\n") ;
            exit(1);
    }

    while ((ch = getc(fp)) != EOF)
    {
        putchar(ch);
    }

    fclose(fp); //关闭文件

    system("pause");
    return 0;
}