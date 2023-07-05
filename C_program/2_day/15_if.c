#include <stdio.h>

int main(void)
{
    int a = 88,b = 999;
    if(a > 0)
    {
        printf("a大于0\n");
        if(a > 100)
        {
            printf("a大于100\n");
            if(a > 500 && b > a)
            {
                printf("a大于500并且b大于a\n");
            }
        }
    }

    return 0;
}
