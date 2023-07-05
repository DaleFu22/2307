#include <stdio.h>

int main(void)
{
    int a = 100,sum = 0;
    while(a > 0)
    {
        sum += a--;    
    }
    printf("sum = %d\n",sum);

    return 0;
}
