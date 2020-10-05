//trouble.c--误用=会导致无限循环

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long num;
    long sum = 0L;
    int status;

    status = scanf("%ld", &num);
    while (status = 1)
    {
        sum = sum + num;
        printf("##########");
        status = scanf("%ld", &num);
    }

    
    system("pause");
    return 0;
}