#include <stdio.h>

int main(void)
{
    int a = 888;
    if(a > 0)//如果if语句块有两条及以上就必须要加大括号
    {
        printf("a比0大\n");
        printf("a比10大\n");
    }
    else
        printf("a比0小\n");

    return 0;
}
