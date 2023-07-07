#include <stdio.h>

//int main(int argc,char *argv[])
int main(int argc,const char **argv)
{
    int i;
    printf("argc = %d\n",argc);

    for(i = 0;i < argc;i++)
    {
        printf("%s\n",argv[i]);
    }
    *argv[1] = 'w';//因为argv有const修饰，所以不能改变它
    printf("%s\n",argv[1]);

    return 0;
}
