/* talkback.c--演示与用户交互 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //提供strlen（）函数的原型

#define DENSTY 62.4 //人体密度

int main(void)
{

    float weigth, volume;
    int size, letters;
    char name[40]; //name是一个可以容纳40个字符的数组

    printf("Hi! What's your first name?\n");
    scanf("%s", name);
    printf("%s, what's your weight in pounds\n", name);
    scanf("%f", &weigth);
    size = sizeof name;
    letters = strlen(name);
    volume = weigth / DENSTY;
    printf("Well, %s,your volume is %3.2f cubic feet.\n", name, volume);
    printf("Also, your first name has %d letters,\n", letters);
    printf("and we have %d bites to store it.\n", size);

    system("pause");
    return 0;
}