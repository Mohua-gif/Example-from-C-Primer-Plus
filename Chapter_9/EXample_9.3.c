// lesser.c--找出两个数中较小的数

#include <stdio.h>
#include <stdlib.h>

int imin(int, int);

int main(void)
{
    int evil1, evil2;

    while (scanf("%d %d", &evil1, &evil2) == 2)
    {
        printf("The lesser of %d and %d is:%d\n", evil1, evil2, imin(evil1, evil2));
    }
    printf("Bye.\n");

    system("pause");
    return 0;
}

int imin(int n, int m)
{
    int min; //最小值

    if (n < m)
        min = n;
    else
        min = m;

    return min;
}