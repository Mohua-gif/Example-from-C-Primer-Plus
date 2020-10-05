/* typesize.c--打印类型大小 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //C99为类型大小提供%zd转换说明
    printf("Type int has a size of %zd bytes.\n", sizeof(int));
    printf("Type unsigned char has a size of %zd bytes.\n", sizeof(unsigned char));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
    printf("Type double has a size of %zd bytes.\n", sizeof(double));
    printf("Type long double has a size of %zd bytes.\n", sizeof(long double));

    system("pause");
    return 0;
}