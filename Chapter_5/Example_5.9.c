//min_sec。c--把秒数转换成分钟数和秒数

#include <stdio.h>
#include <stdlib.h>

#define SEC_PER_MIN 60
int main(void)
{

    int sec, min, left;

    scanf("%d", &sec);
    while (sec > 0)
    {
        min = sec / SEC_PER_MIN;
        left = sec % SEC_PER_MIN;
        printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
        scanf("%d", &sec);
    }

    system("pause");
    return 0;
}