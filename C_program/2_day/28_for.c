#include <stdio.h>

int main(void)
{
    int i = 0;
    int sum = 0;

    for(;i < 101;)
    {
        sum += i++;
    }
    printf("sum = %d\n",sum);
#if 0
    if(i > 100);//注意这是合法的写法，注意
    {
            printf("hello\n");
    }
#endif
    return 0;
}
