#include <stdio.h>
#include <string.h>
int main(void)
{
    char *s = "hello";
 //   *s = 'w';
    s = "world";
    printf("%ld\n",strlen("ATS\n012\1\\"));
    printf("%s\n",s);

    return 0;
}
