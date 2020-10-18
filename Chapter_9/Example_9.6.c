//recur.c--递归演示

#include <stdio.h>
#include <stdlib.h>

void up_and_down(int);//递归所使用的函数


int main(void)
{
    up_and_down(1);
    system("pause");
    return 0;
}

void up_and_down(int n)
{
    printf("Level %d: n location %p\n",n,&n);//#1
    if(n<4)
        up_and_down(n+1);
    printf("Level %d: n location %p\n",n,&n);//#2
}