//checking.c--输入验证

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
long get_long(void);                                        //验证输入是一个整数
bool bad_limits(long begin, long end, long low, long high); //验证范围的上下限是否有效
double sum_squares(long a, long b);                         //计算a~b之间的整数平方和

int main(void)
{
    const long MIN = -1000000L; //范围的上限
    const long MAX = +1000000L; //范围的下限
    long start;                 //用户指定范围最小值
    long stop;                  //用户指定范围最大值
    double answer;

    start = get_long();
    stop = get_long();

    while (start != 0 || stop != 0)
    {
        if (bad_limits(start, stop, MIN, MAX))
            printf("Please try again!");
        else
        {
            answer = sum_squares(start, stop);
        }
        start = get_long();
        stop = get_long();
    }
    printf("Done.\n");

    system("pause");
    return 0;
}

long get_long(void)
{
    long input;
    char ch;

    while (scanf("%ld", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch); //处理错误输入
    }

    return input;
}

double sum_squares(long a, long b)
{
    double total = 0;
    long i;

    for (i = a; i <= b; i++)
    {
        total += (double)i * (double)i;
    }
    return total;
}

bool bad_limits(long begin, long end, long low, long high)
{
    bool not_good = false;

    if (begin > end)
        not_good = true;
    if (begin < low)
        not_good = true;
    if (begin > high || end > high)
        not_good = true;

    return not_good;
}