#include <stdio.h>

int main(void)
{
    int a = 888;
    printf("goto之前\n");
    goto A;
    printf("goto之后\n");

A:{
        printf("你好,再见\n");
  }

    return 0;
}
