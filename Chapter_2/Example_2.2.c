//fathm_ft.c--把2英寻转化为英尺

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int feet,fathmos;

    fathmos=2;
    feet=6*fathmos;

    printf("There are %d feet in %d fathmos!",feet,fathmos);
    printf("Yes, Isaid %d feet!\n",6*fathmos);

    system("pause");
    return 0;
}