/* praisel.c--使用不同类型的字符串 */

#include <stdio.h>
#include <stdlib.h>

#define PRAISEL "You are an extraordinary being."

int main(void)
{

    char name[40];

    printf("What is your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISEL) ;

    
    return 0;
}