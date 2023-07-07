#include <stdio.h>

int main(void)
{
    printf("实现strcat功能\n");

    char s1[50] = "hello";
    char s2[] = "world";

    char *p = s1;
    char *q = s2;
    while(*p++);
    p--;
#if 1
    while(*q != 0)
    {
        *p++ = *q++;
    }
    *p = 0;
#endif
 //   while(*p++ = *q++);
    printf("%s\n",s1);

    return 0;
}
