#include <stdio.h>

int main(void)
{
    int a[5] = {3,1,5,6,8};
    void *p = a;
    int i;

    for(i = 0;i < 5;i++)
    {
        printf("%d\t",*((int *)(p)+i));
    }
    puts("");

    return 0;
}
