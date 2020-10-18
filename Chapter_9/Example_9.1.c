//lethead1.c

#include <stdio.h>
#include <stdlib.h>

#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar(void);

int main(void)
{
    starbar();
    printf("%s\n",NAME);
    printf("%s\n",ADDRESS);
    printf("%s\n",PLACE);
    starbar();
    system("pause");
    return 0;
}

void starbar(void)
{
    int count;//计数器

    for(count=1;count<=WIDTH;count++)
        putchar('*');
    putchar('\n');
}