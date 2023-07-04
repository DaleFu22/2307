#include <stdio.h>

int main(void)
{
    int c;//由系统分配随机值
    int e = 8;
    static int a;//系统默认a的值为0
    static int b = 999;

    printf("a = %d\nb = %d\n",a,b);

    return 0;
}
