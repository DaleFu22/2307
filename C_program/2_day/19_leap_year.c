#include <stdio.h>

int main(void)
{
    int year;
    printf("====================判断闰年===================\n");
    printf("请输入年份:");
    scanf("%d",&year);

    if((year%4 == 0 && year%100 != 0) || (year%100==0 && year%400==0))
    {
        printf("%d年是闰年\n",year);
    }
    else
    {
        printf("%d不是闰年\n",year);
    }

    return 0;
}
