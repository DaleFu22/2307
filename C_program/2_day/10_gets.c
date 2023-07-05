#include <stdio.h>

int main(void)
{
        char string[15];
        printf("Input a string:");
        //使用scanf无法输入一句话，比如hello world只会输入hello
//        scanf("%s",string);
        gets(string);
        printf("%s\n", string);

        return 0;
}
