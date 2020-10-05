//shoes.c--计算多个不同鞋码对应的脚长

#include <stdio.h>
#include <stdlib.h>

#define ADJUST 7.31

int main(void)
{

    const double SCALE = 0.333; //const变量
    double shoe, foot;

    printf("Shoe size (men's)    foot length\n");
    shoe = 3.0;

    while (shoe < 18.5)
    {
        foot = SCALE * shoe * ADJUST;
        printf("%10.1f %15.2f inches\n", shoe, foot);
        shoe = shoe + 1;
    }

    system("pause");
    return 0;
}