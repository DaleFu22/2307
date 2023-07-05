#include <stdio.h>

int main(void)
{
    int year;
    printf("====================判断闰年======================\n");
    printf("请您输入:");
    scanf("%d",&year);
    if(year%4 == 0)
    {
        if(year%100 != 0)
        {
            printf("%d年是闰年\n",year);
        }
        else//如果进入else则说明年份能变100整除
        {
            if(year%400 == 0)
            {
                printf("%d是闰年\n",year);
            }
            else
            {
                printf("%d不是闰年...\n",year);
            }
        }
    }
    else//不能被4整除
    {
        printf("%d年不是闰年\n",year);
    }

    return 0;
}

