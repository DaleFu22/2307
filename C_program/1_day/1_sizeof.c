#include <stdio.h>

int main(void)
{
    char *s;
    long double b;
    printf("使用sizeof运算符\n");
    printf("sizeof(int) = %lu\n",sizeof(int));
    printf("sizeof(s) = %lu\n",sizeof(s));
    printf("sizeof b = %lu\n",sizeof b);

    printf("sizeof(long double) = %lu\n",sizeof(long double));
    //当sizeof里面传数据类型时不能缺省括号
    //printf("sizeof long double = %lu\n",sizeof long double );

    return 0;
}
