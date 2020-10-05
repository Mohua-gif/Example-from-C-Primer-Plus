//wheat.c--指数增长

#include <stdio.h>
#include <stdlib.h>

#define SQUARES 64

int main(void)
{

    const double CROP = 2E16;
    double current=1, total=1;
    int count = 1;

    while (count < SQUARES)
    {
        count = count + 1;
        current = current * 2;
        total = total + current;
        printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
    }  
    printf("That is all!");

    system("pause");
    return 0;
}