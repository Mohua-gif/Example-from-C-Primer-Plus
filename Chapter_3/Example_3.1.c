/* platinum.c --your weight in platinum */

#include<stdio.h>
#include<stdlib.h>

int main(void){
    float weight;//你的体重
    float value;//相等重量的白金价值

    printf("**************\n");
    printf("**************\n");
    printf("**************\n");

    //获取用户的输入
    scanf("%f",&weight);

    value=1700.0*weight*14.5833;

    printf("*********%.2f\n",value);
    printf("**************\n");
    printf("**************\n");

    system("pause");
    return 0;
}