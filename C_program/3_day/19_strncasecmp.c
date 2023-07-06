#include <stdio.h>
#include <strings.h>

int main(void)
{
    int ret;
    char s1[] = "quit";
    char s2[] = "QuiT";

    /*忽略大小写并指定比较字符个数进行判断*/
    ret = strncasecmp(s1,s2,4);
    printf("ret = %d\n",ret);

    return 0;
}
