//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 1, b = 1;
    int a_post, b_pre;

    a_post = a++;
    b_pre = ++b;

    printf("a=%d a_post=%d b=%d b_pre=%d", a, a_post, b, b_pre);

    system("pause");
    return 0;
}