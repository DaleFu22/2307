#include <stdio.h>

int main(void)
{
    int x = 82,y = 101,s1,s2;
    s1 = (x>=y ? x+18:y-100);
    s2 = (x<(y-11) ? x-22:y-1);

    printf("s1 = %d\ns2 = %d\n",s1,s2);

    return 0;
}
