/* charcode.c--显示字符的代码编号 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    char ch;

    printf("Please enter a character.\n");
    scanf("%c", &ch);
    printf("The code for %c is %d.\n", ch, ch);

    system("pause");
    return 0;
}