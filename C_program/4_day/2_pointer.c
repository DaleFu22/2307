#include <stdio.h>

int main(void)
{
    int a = 999;
    int b = 888;
 //   char *q = &a;//类型不匹配
    char *s = "hello";

    printf("字符串hello的地址:%p\n",s);
    int *p = &a;//初始化
    printf("a的地址是：%p\n",p);
    printf("a的地址是：%p\n",&a);
    p = &b;//赋值
    printf("b的地址是：%p\n",p);
    printf("b的地址是：%p\n",&b);

    printf("sizeof(p) = %lu\n",sizeof(p));
    printf("sizeof(char *) = %lu\n",sizeof(char *));

    return 0;
}
