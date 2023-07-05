#include <stdio.h>

int main(void)
{
    char *s = "hello";
    printf("演示段错误\n");
    printf("xxxxx\n");

    *s = 'w';

    return 0;
}
