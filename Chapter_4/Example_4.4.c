/* pizza.c--在披萨饼程序中使用已定义的常量 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main(void)
{

    float area, circum, radius;

    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("Circumference = %1.2f, area =%1.2f\n", circum, area);

    system("pause");
    return 0;
}