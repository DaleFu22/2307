#include <stdio.h>

int main(void)
{
    int a=8,b = 9,c = 12,d;
    d = (a>0?b=b+1:(c = c+2)>20?b:c);

    printf("d = %d\n",d);

    return 0;
}
