#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[30] = "hello";
    char s2[] = "how";

    strcpy(s1,s2);

    printf("%s\n",s1);
    printf("%c\n",s1[4]);

    return 0;
}
