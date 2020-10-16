//showchar1.c--有较大的I/O问题的程序

#include <stdio.h>
#include <stdlib.h>

void display(char cr, int lines, int width);

int main(void)
{
    int ch;         //待打印字符
    int rows, cols; //行数和列数
    printf("Enter a character and two integers:\n");
    while ((ch = getchar()) != '\n')
    {
        scanf("%d %d", &rows, &cols);
        display(ch, rows, cols);
        printf("Enter anthor character and two integers:\n");
        printf("Enter a newline to quit.\n");
    }
    printf("Bye.\n");

    system("pause");
    return 0;
}
void display(char cr, int lines, int width)
{
    int row, col;

    for (row = 1; row <= lines; row++)
    {
        for (col = 1; col <= width; col++)
        {
            putchar(cr);
        }
        putchar('\n'); //结束一行开始新的一行
    }
}