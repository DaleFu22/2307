#include <stdio.h>

int main(void)
{
    int a = 888,b = 999;
    //if--else if结构只会执行满足条件的其中一个语句块
    if(a > 0)
    {
        printf("a大于0\n");
    }
    else if(a > 100)
    {
        printf("a大于100\n");
    }
    else if(a > 500)
    {
        printf("a大于500\n");
    }
    else
    {
        printf("a小于0\n");
    }

    return 0;
}
