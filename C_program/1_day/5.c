#include <stdio.h>

int main(void)
{
    int a = 8;
    a += 6;
    {
        int a = 9;
        printf("a = %d\n",a);
    }
    printf("a = %d\n",a);

    return 0;
}
