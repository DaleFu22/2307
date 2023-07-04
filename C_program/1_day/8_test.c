#include <stdio.h>

int main(void)
{
    int a = 1,b = 8,c = 0,d = 0;

    if((c = a+1) && (d = b+8))
    {
        printf("xxxx\n");
    }

    printf("a = %d\nb = %d\nc = %d\nd = %d\n",a,b,c,d);

    return 0;
}
