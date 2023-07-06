#include <stdio.h>
#include <strings.h>

int main(void)
{
    char s[100] = {0};
    char a,temp;
    int i= 0,j;
    printf("Please input:");
    while((a = getchar()) != '\n')
    {
        s[i++] = a;
    }
#if 0
    for(j = 0;j < i/2;j++)
    {
        temp = s[j];
        s[j] = s[i-1-j];
        s[i-1-j] = temp;
    }
#endif

    for(j = 0;j < i;j++)
    {
        temp = s[j];
        s[j] = s[i-1];
        s[i-1] = temp;
        i--;
    }
    printf("%s\n",s);

    return 0;
}

