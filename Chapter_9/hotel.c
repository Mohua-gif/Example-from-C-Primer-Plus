//hotel.c--酒店管理函数
#include <stdio.h>
#include "Hotel.h"
int menu(void)
{
    int code, status;
    while ((status = scanf("%d", &code)) != 1 ||
           (code < 1 || code > 5))
    {
        if (status != 1)
            scanf("%*s");
    }

    return code;
}

int getnights(void)
{
    int nights;

    while (scanf("%d", &nights) != 1)
    {
        scanf("%*s");
    }

    return nights;
}

void showprice(double rate, int nights)
{
    int n;
    double total = 0.0;
    double factor = 1.0;

    for (n = 1; n < nights; n++)
    {
        total += rate * factor;
    }
    printf("%0.f.\n", total);
}