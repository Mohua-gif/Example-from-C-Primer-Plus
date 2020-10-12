//power.c--计算数的整数幂

#include <stdio.h>
#include <stdlib.h>

double power(double n, int p); //ANSI函数原型

int main(void)
{
    double x, xpow;
    int exp;

    while (scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        printf("%.3f to the power %d is %.5g\n", x, exp, xpow);
    }
    printf("Hope you enjoyed this power trip --bye!\n");

    system("pause");
    return 0;
}
double power(double n, int p)
{
    double pow = 1;
    int i;

    for (i = 1; i <= p; i++)
    {
        pow *= n;
    }
    return pow;
}