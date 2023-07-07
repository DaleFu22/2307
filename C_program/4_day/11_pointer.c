#include <stdio.h>

int main(void)
{
    char s[] = "hello";
    s[1] = 'w';
    printf("%s\n",s);

    char *p = "world";
//    *(p+1) = 'c';//访问非法内存，段错误
    p = "black";//只是改变了p的指向，没有改变p指向的内存空间的内容
    printf("%s\n",p);

    return 0;
}
