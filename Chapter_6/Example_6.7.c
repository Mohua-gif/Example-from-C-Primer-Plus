//truth.c--哪些值为真

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n=3;

    while (n)
    {
        printf("%2d is true\n",n--);
    }
    printf("%2d is false!\n",n);

    n=-3;
    while (n)
    {
         printf("%2d is true\n",n++);
    }
    printf("%2d is false!\n",n);
    
    

    system("pause");
    return 0;
}