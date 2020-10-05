//

#include <stdio.h>
#include <stdlib.h>

void pound(int n); //ANSI原型函数声明

int main(void)
{

    int times = 5;
    char ch = '!'; //ASCII码是33
    float f = 6.0f;

    pound(times);
    pound(ch);
    pound(f);
    
    system("pause");
    return 0;
}

void pound(int n)
{
    while (n-- > 0)
    {
        printf("#");
    }
    printf("\n");
}