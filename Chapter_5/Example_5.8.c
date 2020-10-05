//sizeof.c--使用sizeof运算符

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int n = 0;
    size_t intsize;

    intsize = sizeof(int);
    printf("n = %d, n has %zd bytes; all ints have %zd bytes", n, sizeof n, intsize);

        system("pause");
    return 0;
}