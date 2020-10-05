/* praisel2.c--使用不同类型的字符串 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PRAISEL "You are an extraordinary being."

int main(void)
{

    char name[40];

    printf("What is your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISEL);
    printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof name);
    printf("The phrase of praise has %zd letters ", strlen(PRAISEL));
    printf("and occpucies %zd memory cells. \n", sizeof PRAISEL);

    system("pause");
    return 0;
}