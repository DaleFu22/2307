#include <stdio.h>
#include <strings.h>
#include <string.h>

int main(void)
{
    int i;
#if 0
    /*全部初始化*/
    int a[5] = {1,2,3,4,5};
    for(i = 0;i < 5;i++)
    {
        printf("%d\t",a[i]);
    }
    puts("");
#endif
#if 0
    /*部分初始化*/
    int a[5] = {1,2,3};
    for(i = 0;i < 5;i++)
    {
        printf("%d\t",a[i]);
    }
    puts("");
#endif
#if 0
    /*初始化为0*/
    int a[5] = {0};
    for(i = 0;i < 5;i++)
    {
        printf("%d\t",a[i]);
    }
    puts("");
#endif
#if 0
    /*初始化为0*/
    int a[5];
//    bzero(a,sizeof(a));
    memset(a,0,sizeof(a));
    for(i = 0;i < 5;i++)
    {
        printf("%d\t",a[i]);
    }
    puts("");
#endif
#if 0
    /*指定元素初始化*/
    int a[5] = {1,2,[4] = 999};
    for(i = 0;i < 5;i++)
    {
        printf("%d\t",a[i]);
    }
    puts("");
#endif
#if 1
    /*不指定数组长度*/
    int a[] = {1,2,3,4,5,6,7};
    for(i = 0;i < 7;i++)
    {
        printf("%d\t",a[i]);
    }
    puts("");
#endif
    return 0;
}
