//summing.c--根据用户键入的整数求和

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    long num;
    long sum = 0; //把sum初始化为0
    int status;

    status = scanf("%ld", &num);

    while (status == 1)
    {
        sum = sum + num;
        status = scanf("%ld", &num);
    }

    printf("the sum is :%ld.\n", sum);

    system("pause");
    return 0;
}