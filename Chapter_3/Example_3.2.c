/* printf1.c--演示printf()函数的一些特征 */

#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    int ten=10;
    int two=2;

    printf("Do it right: ");
    printf("%d minus %d is %d\n", ten,2,ten-two);
    printf("Do it wrong: ");
    printf("%d minus %d is %d\n", ten); //遗漏2个参数

    system("pause");
    return 0;
}