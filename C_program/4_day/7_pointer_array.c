#include <stdio.h>

int main(void)
{
    int a[6] = {1,4,2,6,7,9};
    int i;
    int *p = a;

    //[]下标运算符其实就是*( )
    for(i = 0;i < 6;i++)
    {
        printf("%d\t",a[i]);
    }
    puts("");
    for(i = 0;i < 6;i++)
    {
        printf("%d\t",*(p+i));
    }
    puts("");
    for(i = 0;i < 6;i++)
    {
        printf("%d\t",p[i]);
    }
    puts("");
    for(i = 0;i < 6;i++)
    {
        printf("%d\t",i[a]);
    }
    puts("");
    for(i = 0;i < 6;i++)
    {
        printf("%d\t",p[i]);
    }
    puts("");
    for(p=a;p < a+6;p++)
    {
        printf("%d\t",*p);
    }
    puts("");

//    printf("%d\n",*a++);//a是地址常量，不能进行自增或赋值操作

    return 0;
}
