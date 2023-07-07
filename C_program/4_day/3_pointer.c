#include <stdio.h>

int main(void)
{
    int a[6] = {1,4,2,5,6,7};

    int *p = a;
    int *q = &a[4];
//  int (*p)[6] = &a;//&a是指向整个数组的地址。所以要定义数组指针接收该地址

    printf("&a[0] = %p\n",&a[0]);
    printf("p = %p\n",p);
    printf("&a[1] = %p\n",&a[1]);
    //指针加1或减1不是地址的加1减1，而是元素的加1减1
    printf("p+1 = %p\n",p+1);

    printf("q-p = %ld\n",q-p);

    return 0;
}
