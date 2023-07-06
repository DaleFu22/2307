#include <stdio.h>

int main(void)
{
    int i,j,temp;
    int a[7] = {4,1,6,7,2,3,5};

    for(i = 0;i < 7-1;i++)//外层循环趟数
    {
        for(j = 0;j < 7-1-i;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(i = 0;i < 7;i++)
    {
        printf("%d\t",a[i]);
    }
    puts("");

    return 0;
}




