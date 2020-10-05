/* width.c--字符宽度 */

#include<stdio.h>
//#include<stdlib.h>

#define PAGES 959

int main(void){
    
    printf("*%d*\n",PAGES);
    printf("*%2d*\n",PAGES);
    printf("*%10d*\n",PAGES);
    printf("*%-10d*\n",PAGES);
    //system("pause");
    return 0;
}