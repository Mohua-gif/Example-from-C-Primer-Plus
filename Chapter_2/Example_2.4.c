//nogood.c--一个有错误不太好的程序

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n,int n2,int n3;

    n=5;
    n2=n*n;
    n3=n2*n2;
    printf("n = %d ,n squared = %d, n cubed = %d\n",n ,n2 ,n3)

    system("pause");
    return 0;
}