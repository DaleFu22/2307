#include <stdio.h>

int main(void)
{
    int i;
    //逐个字符赋值初始化
    char s1[5] = {'h','e','l','l','o'};
    for(i = 0;i < 5;i++)
    {
        printf("%c",s1[i]);
    }
    puts("");
    printf("%s\n",s1);
    printf("sizeof(s1)  =%lu\n",sizeof(s1));

    char s2[5] = {"hello"};
    for(i = 0;i < 5;i++)
    {
        printf("%c",s2[i]);
    }
    puts("");
    printf("%s\n",s2);
    printf("sizeof(s2)  =%lu\n",sizeof(s2));

    char s3[5] = "hello";
    for(i = 0;i < 5;i++)
    {
        printf("%c",s3[i]);
    }
    puts("");
    printf("%s\n",s3);
    printf("sizeof(s3)  =%lu\n",sizeof(s3));

    char s4[] = "hello";
    for(i = 0;i < 5;i++)
    {
        printf("%c",s4[i]);
    }
    puts("");
    printf("%s\n",s4);
    printf("sizeof(s4)  =%lu\n",sizeof(s4));

    return 0;
}
