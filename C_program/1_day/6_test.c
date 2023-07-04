#include <stdio.h>

int main(void)
{
    int a = 1,b = 1,c,d;
    c = a++;
    d = ++b;

    printf("a = %d\nb = %d\nc = %d\nd = %d\n",a,b,c,d);

    return 0;
}
