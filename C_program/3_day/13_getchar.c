#include <stdio.h>

int main(void)
{
    char s[110] = {0};
    int i = 0;
    char a;
#if 0
    while( (a = getchar()) != '\n')
    {
        s[i++] = a;
    }
#endif
    while((s[i++] = getchar()) != '\n');

    printf("%s\n",s);

    return 0;
}
