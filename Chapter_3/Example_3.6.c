/* altanmes.c--可移植整数类型名 */

#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>

int main(void)
{

    int32_t me32; //32位有符号整数变形

    me32 = 45933945;
    printf("First, assume int32_t is int: ");
    printf("me32 = %d\n", me32);
    printf("Next, let's not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");
    printf("me32 = %" PRId32 "\n", me32);
    

    system("pause");
    return 0;
}