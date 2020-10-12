// colddays.c--找出温度为零下的天数占总天数的百分比

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const int FREEZING = 0; //零点
    float temperature;
    int cold_days = 0;
    int all_days = 0;

    while (scanf("%f", &temperature) == 1)
    {
        all_days++;
        if (temperature < FREEZING)
        {
            cold_days++;
        }
    }

    if (all_days != 0)
    {
        printf("%d days total:%.lf%% were below freezing.\n",
               all_days, 100.0 * (float)cold_days / all_days);
    }
    if (all_days==0)
    {
        printf("No data emtered!\n");
    }
    

    system("pause");
    return 0;
}