#include <stdio.h>

int main(void)
{
    int a[6] = {888,2,3,4,5,6};

    int *p = a;
    int *q = &a[2];
    char *s = "hello";

//    int ret0 = p>s;//不同类型的指针变量不能做比较

    int ret = p>q;//指针相比，比的是指针指向的前后位置

    printf("ret = %d\n",ret);

    return 0;
}
