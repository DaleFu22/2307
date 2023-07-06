#include <stdio.h>

int main(void)
{
    int i,j,row,column,min;
    int a[3][4] = {{1,4,2,6},{-1,5,7,9},{-8,0,5,33}};

    min = a[0][0];//假设法，假设a[0][0]最小

    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 4;j++)
        {
            if(min > a[i][j])
            {
                min = a[i][j];
                row = i;
                column = j;
            }
        }
    }

    printf("最小值为:%d\n行号:%d\t列号:%d\n",min,row,column);

    return 0;
}
