#include <stdio.h>

int main(void)
{
    char s1[][20] = {"apple","pen","banana"};//字符串和s1都放在栈中
    char *s2[3] = {"apple","pen","banana"};//字符串放在只读常量区,s2放在栈中

    int i,j;
    for(i = 0;i < 3;i++)
    {
        printf("%s\t",s1[i]);
    }
    puts("");

    for(j = 0;j < 3;j++)
    {
        printf("%s\t",s2[j]);
    }
    puts("");
}
