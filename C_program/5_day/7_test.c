#include <stdio.h>

int main(void)
{
    char ch[]={"avc\0def"},*p=ch;

    printf("%c\n",*p+4);
    printf("%c\n",*p++);
    printf("%c\n",*p++);

    return 0;
}
