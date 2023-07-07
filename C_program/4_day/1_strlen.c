#include <stdio.h>
#include <string.h>

int main(void)
{
    int ret1,ret2,ret3;
    char  s1[10]={'A','\0','B','C','\0','D'};
    char  s2[ ]="\t\v\\\0will\n";
    char  s3[ ]="\x69\082\n"; 
    ret1 = strlen(s1);//strlen是对字符串的操作
    ret2 = strlen(s2);//strlen是对字符串的操作
    ret3 = strlen(s3);//strlen是对字符串的操作
    printf("ret1 = %d\n",ret1);
    printf("ret2 = %d\n",ret2);
    printf("ret3 = %d\n",ret3);

    return 0;
}
