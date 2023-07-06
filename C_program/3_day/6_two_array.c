#include <stdio.h>

int main(void)
{
    int i,j;
#if 0
    /*全部初始化*/
    int a[3][2] = {{1,2},{3,4},{5,6}};
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        puts("");
    }
#endif
#if 0
    /*按照排列顺序初始化*/
    int a[3][2] = {1,2,3,4,5,6};
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        puts("");
    }
#endif
#if 0
    /*按照排列顺序部分初始化*/
    int a[3][2] = {1,2,3,4};
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        puts("");
    }
#endif
#if 0
    /*指定行的部分初始化*/
    int a[3][2] = {{1,2},{3},{4}};
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        puts("");
    }
#endif
#if 0
    /*不指定行号初始化*/
    int a[][3] = {1,2,3,4,5,6};
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        puts("");
    }
#endif
#if 1
    /*省略行号的部分初始化*/
    int a[][2] = {1,2,3,4,5};
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        puts("");
    }
#endif


    return 0;
}
