// skiptwo.c--跳过输入中的前两个整数

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int n;
    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);
    printf("The last integer was %d\n", n);

    system("pause");
    return 0;
}