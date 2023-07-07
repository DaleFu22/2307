#include <stdio.h>

int main(void)
{
    int a[3][4] = {
                {1,3,2,5},
                {6,7,9,8},
                {1,3,5,4}
    };
    int (*p)[] = a;
    int i,j;
    
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 4;j++)
        {
            //printf("%d\t",*p++);//合法
            //printf("%d\t",*(p+4*i+j));
            printf("%d\t",p[i][j]);
//            printf("%d\t",*(*(a+i)+j));
        }
        puts("");
    }

    return 0;
}
