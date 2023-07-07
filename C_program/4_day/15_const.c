#include <stdio.h>

int main(void)
{
    int a = 8;
    a = 12;
    printf("a = %d\n",a);
    int const b = 8;
    int *p = &b;
//    b = 888;
    *p = 888;//通过间接法可以改变const修饰的变量，说明const修饰的变量还是变量，没有变成常量
    printf("b = %d\n",b);

    return 0;
}
