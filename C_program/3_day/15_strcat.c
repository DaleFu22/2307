#include <string.h>
#include <stdio.h>

int main(void)
{
#if 1
    char s1[20]="hello";//被连接字符串要给足够空间
    char s2[6]="world";
#endif
#if 0
    /*不能以这种方式操作，因为这里"hello"放在.rodata段*/
    char *s1 = "hello";
    char *s2 = "world";
#endif
    strcat(s1,s2);

    printf("%s\n",s1);

    return 0;
}
