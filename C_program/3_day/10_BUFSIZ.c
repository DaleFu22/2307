#include <stdio.h>

int main(void)
{
    char buf[BUFSIZ];//最大只能使用BUFSIZ-1，要留一个\0

    printf("BUFSIZ = %d\n",BUFSIZ);

    return 0;
}
