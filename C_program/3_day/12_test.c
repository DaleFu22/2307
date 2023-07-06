#include <stdio.h>
int main(void)
{
        int k;
        char s[17];
        for(k=0;k<17;k++)
                s[k]=getchar();
        printf("%s\n",s);
}

