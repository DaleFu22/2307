#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    char s1[8848] = "hello";

    n = strlen(s1);
    printf("n = %d\n",n);
    printf("sizeof(s1) = %lu\n",sizeof(s1));

    return 0;
}
