#include <stdio.h>

int main(void)
{
    int a[3][3] = {
                {1,4,2},
                {3,5,7},
                {9,0,8}
    };
    int *p[3] = {a[0],*(a+1),a[2]};//指针数组
    int **q = p;//p = &p[0]也就是p是二级指针类型
    printf("q = %p\n",q);
    printf("p = %p\n",p);
    int i,j,sum = 0;
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
  //          sum += *(*(p+i)+j);
            sum += p[i][j];
        }
    }

    printf("sum = %d\n",sum);

    return 0;
}
