#include <stdio.h>

int main(void)
{
    int a = 0,sum = 0;

A:{
        sum += a++;
        if(a  > 100)
        {
            printf("1+2+3+...+100 = %d\n",sum);
            return 0;
        }
  }
  goto A;

    return 0;
}
