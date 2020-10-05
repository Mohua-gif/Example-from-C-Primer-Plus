/* printf2.c--更多printf()函数的特征 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    unsigned int un = 3000000000; //int为32位和short为16位的系统
    short end = 200;
    long big = 65337;
    long long verybig = 12345678908642;

    printf("un = %u and not %d \n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);
    printf("verybig = %lld and not %ld\n", verybig, verybig);

    system("pause");
    return 0;
}