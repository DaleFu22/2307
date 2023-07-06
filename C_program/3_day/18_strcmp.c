#include <stdio.h>
#include <string.h>

int main(void)
{
    int ret;
    char s1[] = "ABC";
    char s2[] = "ABC";

    ret = strcmp(s1,s2);

    printf("ret = %d\n",ret);

    return 0;
}
