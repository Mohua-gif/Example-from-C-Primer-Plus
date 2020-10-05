//add_one.c--递增：前缀和后缀

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ultra = 0, super = 0;

    while (super < 5)
    {
        super++;
        ++ultra;
        printf("%4d %4d\n", super, ultra);
    }

    system("pause");
    return 0;
}