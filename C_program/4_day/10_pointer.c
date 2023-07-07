#include <stdio.h>

int main(void)
{
    int a[3][3] = {
                {1,4,2},
                {5,7,8},
                {9,0,3}
    };
    printf("&a  = %p\n",&a);
    printf("&a+1 = %p\n",&a+1);
    printf("a = %p\n",a);
    printf("a+1 = %p\n",a+1);
    printf("a[0] = %p\n",a[0]);
    printf("a[0]+1 = %p\n",a[0]+1);

    printf("a[0][0] = %d\n",a[0][0]);

    return 0;
}
