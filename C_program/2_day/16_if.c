#include <stdio.h>

int main(void)
{
    int a=2,b=-1,c=2;
    /*if--else讲究就近原则，else属于离他最近的if*/
    if(a<b)
        if(b<0)c=0;
    else c+=1;

    printf("%d\n",c);

    return 0;
}
