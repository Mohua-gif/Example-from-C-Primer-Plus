//boolean.c--使用_Bool类型的变量

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long num;
    long sum = 0L;
    _Bool input_is_good;

    input_is_good = (scanf("%ld", &num) == 1);
    while (input_is_good)
    {
        sum = sum + num;
        printf("##########");
        input_is_good = (scanf("%ld", &num) == 1);
    }

    system("pause");
    return 0;
}