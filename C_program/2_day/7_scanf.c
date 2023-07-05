#include <stdio.h>

int main(void)
{
    int a,b,c,ret;

    ret = scanf("%2d%3d%4d",&a,&b,&c);

    printf("a = %d\nb = %d\nc = %d\n",a,b,c);

    printf("ret = %d\n",ret);

    return 0;
}
