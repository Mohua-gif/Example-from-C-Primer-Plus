//menuette.c--菜单程序

#include <stdio.h>
#include <stdlib.h>

char get_choice(void);
char get_first(void); //得到输入的第一个字符
void count(void);

int main(void)
{
    int choice;

    while ((choice = get_choice()) != 'q')
    {
        switch (choice)
        {
        case 'a':
            printf("Buy low, sell high!.\n");
            break;
        case 'b':
            putchar('\a'); //ANSI
            break;
        case 'c':
            count();
            break;
        case 'd':
            printf("Program error!\n");
            break;

        default:
            break;
        }
    }

    system("pause");
    return 0;
}

char get_choice(void)
{
    int ch;

    printf("Enter the letter of your choice:\n");
    printf("a.advice               b.bell   \n");
    printf("c.count                q.quit   \n");

    //ch = getchar();
    ch = get_first();

    while ((ch < 'a' || ch > 'c') && ch != 'q')
    {
        printf("Please respond with a,b,c, or q.\n");
        //ch = getchar();
        ch = get_first();
    }
    return ch;
}

char get_first(void)
{
    int ch;
    ch = getchar();
    while (getchar() != '\n')
    {
        continue;
    }
    return ch;
}

void count(void)
{
    int n, i;
    printf("Count how far? Enter an integer:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("%d\n", i);
    while (getchar() != '\n')
    {
        continue;
    }
}