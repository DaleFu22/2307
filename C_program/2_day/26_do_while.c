#include <stdio.h>

int main(void)
{
    int a = 0,sum = 0;

    do{
        sum += a++;
    }while(a <= 100);

    printf("sum = %d\n",sum);

    return 0;
}
