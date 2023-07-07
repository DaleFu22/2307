#include <stdio.h>

int main(void)
{
    int a = 8;
    int b = 9;
#if 0
    //p可以变，但是*p不能变
    const int *p = &a;
    p = &b;
//    *p = 78;//不合法
    printf("*p = %d\n",*p);
#endif
#if 0
    //p可以变，但是*p不能变
    int const*p = &a;
    p = &b;
//    *p = 78;//不合法
    printf("*p = %d\n",*p);
#endif
#if 0
    //*p可以变，但是p不能变
    int * const p = &a;
    p = &b;//不合法
    *p = 78;
    printf("*p = %d\n",*p);
#endif
#if 1
    //p不可以变，*p也不能变
    int const* const p = &a;
 //   p = &b;//不合法
 //   *p = 78;//不合法
    printf("*p = %d\n",*p);
#endif


    return 0;
}
